/*
FUNCTION_NAME: FUN_027ce2c4
ENTRY_POINT: 027ce2c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x027ceee4) */
/* WARNING: Removing unreachable block (ram,0x027cec88) */
/* WARNING: Removing unreachable block (ram,0x027ceed0) */

void FUN_027ce2c4(undefined8 *param_1,long *param_2,uint param_3,long param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong __n;
  undefined4 *__src;
  code *pcVar13;
  void *__s;
  void *__s_00;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined4 auStack_b0 [2];
  long local_a8;
  uint local_9c;
  void *local_98;
  long *local_90;
  long local_88;
  undefined4 *local_80;
  void *pvStack_78;
  undefined4 local_6c;
  long local_68;
  
  local_a8 = tpidr_el0;
  local_68 = *(long *)(local_a8 + 0x28);
  local_9c = param_3;
  if ((DAT_048305fc & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_DragEventsProcessor_OnPointerUpEvent__);
                    /* try { // try from 027ce31c to 028ce31f has its CatchHandler @ 027ce344 */
                    /* try { // try from 027ce320 to 028ce333 has its CatchHandler @ 027ce350 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_DragEventsProcessor_RegisterCallbacksFromTarget__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_DragEventsProcessor_UnregisterCallbacksFromTarget__
                      );
                    /* try { // try from 027ce334 to 028ce367 has its CatchHandler @ 027cdf1c */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsWithRenderingLayersPass_Setup__
                      );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 027ce31c with catch @ 027ce344
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 027ce230 with catch @ 027ce348
                        */
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_DragEventsProcessor_OnPointerDownEvent__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 027ce2b0 with catch @ 027ce34c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 027ce320 with catch @ 027ce350
                        */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 027ce368 to 028ce37f has its CatchHandler @ 027ce3b4 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__);
                    /* try { // try from 027ce380 to 028ce3a3 has its CatchHandler @ 027cdf1c */
    DAT_048305fc = 1;
  }
  plVar9 = (long *)(param_4 + 0x20);
  lVar5 = *plVar9;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x40) + 0xfc);
                    /* try { // try from 027ce3a4 to 028ce3b3 has its CatchHandler @ 027ce3b4 */
  uVar10 = __n + 0xf & 0x1fffffff0;
  __src = (undefined4 *)((long)auStack_b0 - uVar10);
                    /* catch() { ... } // from try @ 027ce368 with catch @ 027ce3b4
                       catch() { ... } // from try @ 027ce3a4 with catch @ 027ce3b4 */
                    /* try { // try from 027ce3b8 to 028ce3bb has its CatchHandler @ 027ce3c4 */
  local_98 = (void *)((long)__src - uVar10);
                    /* try { // try from 027ce3bc to 028ce3c7 has its CatchHandler @ 027cdf1c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027ce3b8 with catch @ 027ce3c4
                        */
  __s = (void *)((long)local_98 - uVar10);
  memset(__s,0,__n);
  __s_00 = (void *)((long)__s - uVar10);
  local_88 = 0;
  memset(__s_00,0,__n);
  if (param_2 != (long *)0x0) {
    lVar5 = *plVar9;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xb8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar7 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_027ce478;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_2,lVar5,0);
LAB_027ce478:
    local_90 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
    if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar5 = *local_90;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_027ce4e4;
          }
          uVar10 = uVar10 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(local_90,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_027ce4e4:
      uVar10 = (*(code *)*puVar6)(local_90,puVar6[1]);
      plVar12 = local_90;
      if ((uVar10 & 1) == 0) {
        if (local_90 == (long *)0x0) break;
        lVar5 = *local_90;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 == 0) goto LAB_027cede4;
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_027cedcc;
      }
      lVar5 = *plVar9;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 200);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar7 = *local_90;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            lVar5 = lVar7 + (long)*piVar8 * 0x10 + 0x138;
            goto LAB_027ce56c;
          }
          uVar10 = uVar10 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar10 != 0);
      }
      lVar5 = FUN_01ecb238(local_90,lVar5,0);
LAB_027ce56c:
      lVar5 = *(long *)(lVar5 + 8);
      local_80 = __src;
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,local_90,&local_80,__src);
      memcpy(__s,__src,__n);
      lVar7 = *plVar9;
      lVar11 = param_1[1];
      uVar1 = *(ushort *)(lVar7 + 0x135);
      lVar5 = lVar7;
      if ((uVar1 & 1) == 0) {
        lVar5 = FUN_01ecaf44();
        lVar7 = *plVar9;
        uVar1 = *(ushort *)(lVar7 + 0x135);
      }
      pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x60);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      uVar3 = (*pcVar13)(__s,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x60));
      memcpy(local_98,__s,__n);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar9;
      uVar1 = *(ushort *)(lVar7 + 0x135);
      lVar5 = lVar7;
      if ((uVar1 & 1) == 0) {
        lVar5 = FUN_01ecaf44();
        lVar7 = *plVar9;
        uVar1 = *(ushort *)(lVar7 + 0x135);
      }
      uVar14 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xd8);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      lVar5 = *(long *)(*(long *)(lVar7 + 0xc0) + 0xd8);
      local_80 = &local_6c;
      pvStack_78 = local_98;
      local_6c = uVar3;
      (**(code **)(lVar5 + 0x10))(uVar14,lVar5,lVar11,&local_80);
      if ((local_9c & 1) != 0) {
        lVar7 = *plVar9;
        plVar12 = (long *)*param_1;
        uVar1 = *(ushort *)(lVar7 + 0x135);
        lVar5 = lVar7;
        if ((uVar1 & 1) == 0) {
          lVar5 = FUN_01ecaf44();
          lVar7 = *plVar9;
          uVar1 = *(ushort *)(lVar7 + 0x135);
        }
        pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x60);
        if ((uVar1 & 1) == 0) {
          lVar7 = FUN_01ecaf44();
        }
        uVar3 = (*pcVar13)(__s,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x60));
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)
                 Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
               ) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_027ce72c;
            }
            uVar10 = uVar10 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar12,*(long *)
                                       Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              ,2);
LAB_027ce72c:
        (*(code *)*puVar6)(plVar12,uVar3,puVar6[1]);
      }
      lVar7 = *plVar9;
      uVar1 = *(ushort *)(lVar7 + 0x135);
      lVar5 = lVar7;
      if ((uVar1 & 1) == 0) {
        lVar5 = FUN_01ecaf44();
        lVar7 = *plVar9;
        uVar1 = *(ushort *)(lVar7 + 0x135);
      }
      pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xe0);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      lVar5 = (*pcVar13)(__s,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0xe0));
      if (lVar5 != 0) {
        lVar7 = *plVar9;
        lVar11 = param_1[3];
        uVar1 = *(ushort *)(lVar7 + 0x135);
        lVar5 = lVar7;
        if ((uVar1 & 1) == 0) {
          lVar5 = FUN_01ecaf44();
          lVar7 = *plVar9;
          uVar1 = *(ushort *)(lVar7 + 0x135);
        }
        pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x60);
        if ((uVar1 & 1) == 0) {
          lVar7 = FUN_01ecaf44();
        }
        uVar10 = (*pcVar13)(__s,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x60));
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar10,uVar10 & 0xffffffff);
        }
        uVar10 = FUN_02b088e0(lVar11,uVar10 & 0xffffffff,&local_88,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_DragEventsProcessor_OnPointerDownEvent__
                             );
        if ((uVar10 & 1) == 0) {
          lVar7 = *plVar9;
          lVar11 = param_1[3];
          uVar1 = *(ushort *)(lVar7 + 0x135);
          lVar5 = lVar7;
          if ((uVar1 & 1) == 0) {
            lVar5 = FUN_01ecaf44();
            lVar7 = *plVar9;
            uVar1 = *(ushort *)(lVar7 + 0x135);
          }
          pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x60);
          if ((uVar1 & 1) == 0) {
            lVar7 = FUN_01ecaf44();
          }
          uVar3 = (*pcVar13)(__s,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x60));
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_DragEventsProcessor_RegisterCallbacksFromTarget__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          auVar15 = FUN_029ea538(*(undefined8 *)
                                  Method_UnityEngine_UIElements_DragEventsProcessor_OnPointerUpEvent__
                                );
          local_88 = auVar15._0_8_;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(local_88,auVar15._8_8_,local_88);
          }
          FUN_02b07154(lVar11,uVar3,local_88,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_DragEventsProcessor_UnregisterCallbacksFromTarget__
                      );
        }
        lVar7 = *plVar9;
        uVar1 = *(ushort *)(lVar7 + 0x135);
        lVar5 = lVar7;
        if ((uVar1 & 1) == 0) {
          lVar5 = FUN_01ecaf44();
          lVar7 = *plVar9;
          uVar1 = *(ushort *)(lVar7 + 0x135);
        }
        pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xe0);
        if ((uVar1 & 1) == 0) {
          lVar7 = FUN_01ecaf44();
        }
        plVar12 = (long *)(*pcVar13)(__s,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0xe0));
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *plVar9;
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xb8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44(lVar5);
        }
        lVar7 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_027ce978;
            }
            uVar10 = uVar10 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar12,lVar5,0);
LAB_027ce978:
        plVar12 = (long *)(*(code *)*puVar6)(plVar12,puVar6[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
LAB_027ce98c:
        lVar5 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar10 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_027ce9e0;
            }
            uVar10 = uVar10 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar12,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_027ce9e0:
        uVar10 = (*(code *)*puVar6)(plVar12,puVar6[1]);
        if ((uVar10 & 1) != 0) {
          lVar5 = *plVar9;
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 200);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01ecaf44(lVar5);
          }
          lVar7 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar10 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                lVar5 = lVar7 + (long)*piVar8 * 0x10 + 0x138;
                goto LAB_027cea64;
              }
              uVar10 = uVar10 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar10 != 0);
          }
          lVar5 = FUN_01ecb238(plVar12,lVar5,0);
LAB_027cea64:
          lVar5 = *(long *)(lVar5 + 8);
          local_80 = __src;
          (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar12,&local_80,__src);
          memcpy(__s_00,__src,__n);
          lVar7 = *plVar9;
          lVar11 = param_1[2];
          uVar1 = *(ushort *)(lVar7 + 0x135);
          lVar5 = lVar7;
          if ((uVar1 & 1) == 0) {
            lVar5 = FUN_01ecaf44();
            lVar7 = *plVar9;
            uVar1 = *(ushort *)(lVar7 + 0x135);
          }
          pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x60);
          if ((uVar1 & 1) == 0) {
            lVar7 = FUN_01ecaf44();
          }
          uVar3 = (*pcVar13)(__s_00,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x60));
          lVar7 = *plVar9;
          uVar1 = *(ushort *)(lVar7 + 0x135);
          lVar5 = lVar7;
          if ((uVar1 & 1) == 0) {
            lVar5 = FUN_01ecaf44();
            lVar7 = *plVar9;
            uVar1 = *(ushort *)(lVar7 + 0x135);
          }
          pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x60);
          if ((uVar1 & 1) == 0) {
            lVar7 = FUN_01ecaf44();
          }
          uVar4 = (*pcVar13)(__s,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x60));
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02b0154c(lVar11,uVar3,uVar4,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsWithRenderingLayersPass_Setup__
                      );
          lVar5 = local_88;
          lVar11 = *plVar9;
          uVar1 = *(ushort *)(lVar11 + 0x135);
          lVar7 = lVar11;
          if ((uVar1 & 1) == 0) {
            lVar7 = FUN_01ecaf44();
            lVar11 = *plVar9;
            uVar1 = *(ushort *)(lVar11 + 0x135);
          }
          pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x60);
          if ((uVar1 & 1) == 0) {
            lVar11 = FUN_01ecaf44();
          }
          uVar3 = (*pcVar13)(__s_00,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x60));
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar7 = *(long *)(lVar5 + 0x10);
          lVar11 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = uVar3;
          }
          else {
            FUN_030ba904(lVar5,uVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_027ce98c;
        }
        if (plVar12 != (long *)0x0) {
          lVar5 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar10 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_027cec70;
              }
              uVar10 = uVar10 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_01ecb238(plVar12,*(long *)
                                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_027cec70:
          (*(code *)*puVar6)(plVar12,puVar6[1]);
        }
        lVar7 = *plVar9;
        uVar1 = *(ushort *)(lVar7 + 0x135);
        lVar5 = lVar7;
        if ((uVar1 & 1) == 0) {
          lVar5 = FUN_01ecaf44();
          lVar7 = *plVar9;
          uVar1 = *(ushort *)(lVar7 + 0x135);
        }
        pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xe0);
        if ((uVar1 & 1) == 0) {
          lVar7 = FUN_01ecaf44();
        }
        uVar14 = (*pcVar13)(__s,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0xe0));
        lVar7 = *plVar9;
        uVar1 = *(ushort *)(lVar7 + 0x135);
        lVar5 = lVar7;
        if ((uVar1 & 1) == 0) {
          lVar5 = FUN_01ecaf44();
          lVar7 = *plVar9;
          uVar1 = *(ushort *)(lVar7 + 0x135);
        }
        pcVar13 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xb0);
        if ((uVar1 & 1) == 0) {
          lVar7 = FUN_01ecaf44();
        }
        (*pcVar13)(param_1,uVar14,0,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0xb0));
      }
    } while( true );
  }
  goto LAB_027cee10;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar8 = piVar8 + 4;
    if (uVar10 == 0) break;
LAB_027cedcc:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_027cee00;
    }
  }
LAB_027cede4:
  puVar6 = (undefined8 *)
           FUN_01ecb238(local_90,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_027cee00:
  (*(code *)*puVar6)(plVar12,puVar6[1]);
LAB_027cee10:
  if (*(long *)(local_a8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


