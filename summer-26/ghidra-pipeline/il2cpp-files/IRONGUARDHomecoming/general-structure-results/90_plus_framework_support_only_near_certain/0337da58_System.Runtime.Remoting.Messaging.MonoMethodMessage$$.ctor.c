/*
FUNCTION_NAME: System.Runtime.Remoting.Messaging.MonoMethodMessage$$.ctor
ENTRY_POINT: 0337da58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 164
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0337e028) */

undefined4 System_Runtime_Remoting_Messaging_MonoMethodMessage___ctor(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  long *unaff_x22;
  long *plVar15;
  long unaff_x25;
  long unaff_x27;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  plVar4 = (long *)FUN_01f08890(*param_1,*(undefined4 *)(unaff_x25 + 0x18));
  puVar2 = Method_UnityEngine_GameObject_GetComponent<BoxCollider>__;
  puVar1 = Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__;
                    /* try { // try from 0337da6c to 0347da73 has its CatchHandler @ 0337db18 */
  if (0 < *(int *)(unaff_x25 + 0x18)) {
                    /* try { // try from 0337da74 to 0347daef has its CatchHandler @ 0337d848 */
    uVar14 = 0;
    do {
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_03416d98(uVar5,0);
      if (*(uint *)(unaff_x25 + 0x18) <= uVar14) {
LAB_0337e014:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (unaff_x22 == (long *)0x0) goto LAB_0337e130;
      lVar11 = *unaff_x22;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                    /* try { // try from 0337db04 to 0347db3b has its CatchHandler @ 0337d848 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0337db00 with catch @ 0337db0c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0337da2c with catch @ 0337db10
                        */
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 6) * 0x10 + 0x138);
            goto LAB_0337db14;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
                    /* try { // try from 0337daf0 to 0347daf3 has its CatchHandler @ 0337db1c */
        } while (uVar12 != 0);
      }
                    /* try { // try from 0337daf4 to 0347daf7 has its CatchHandler @ 0337db14 */
                    /* try { // try from 0337daf8 to 0347dafb has its CatchHandler @ 0337db1c */
                    /* try { // try from 0337dafc to 0347daff has its CatchHandler @ 0337d848 */
      puVar6 = (undefined8 *)FUN_01ecb238();
                    /* try { // try from 0337db00 to 0347db03 has its CatchHandler @ 0337db0c */
LAB_0337db14:
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0337daf4 with catch @ 0337db14
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0337da6c with catch @ 0337db18
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0337daf0 with catch @ 0337db1c
                       catch(type#1 @ 042b3198) { ... } // from try @ 0337daf8 with catch @ 0337db1c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0337d95c with catch @ 0337db20
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0337d99c with catch @ 0337db24
                        */
      lVar11 = (*(code *)*puVar6)();
      if (plVar4 == (long *)0x0) goto LAB_0337e130;
      if ((lVar11 != 0) &&
         (lVar7 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
        uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar5,0);
      }
      if (*(uint *)(plVar4 + 3) <= uVar14) goto LAB_0337e014;
      plVar15 = plVar4 + (long)(int)uVar14 + 4;
      *plVar15 = lVar11;
      thunk_FUN_01f51358(plVar15,lVar11);
      if (*(uint *)(plVar4 + 3) <= uVar14) goto LAB_0337e014;
      if (*plVar15 == 0) {
        plVar4 = *(long **)(unaff_x27 + 0x18);
        if (plVar4 != (long *)0x0) {
          uVar10 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
          plVar4 = *(long **)(unaff_x27 + 0x10);
          if (plVar4 != (long *)0x0) {
            uVar8 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
            plVar4 = *(long **)(unaff_x27 + 0x18);
            if (plVar4 != (long *)0x0) {
              uVar9 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
              puVar1 = Method_UnityEngine_GameObject_GetComponent<LineRenderer>__;
              uVar8 = FUN_0340f334(*(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponent<LineRenderer>__,uVar8
                                   ,uVar9,uVar5,0);
              uVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__
                                        );
              Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar9,uVar8,0);
              FUN_0337d514(in_stack_00000010,uVar10,uVar9);
              plVar4 = *(long **)(unaff_x27 + 0x10);
              if (plVar4 != (long *)0x0) {
                uVar10 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
                plVar4 = *(long **)(unaff_x27 + 0x18);
                if (plVar4 != (long *)0x0) {
                  uVar8 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
                  uVar5 = FUN_0340f334(*(undefined8 *)puVar1,uVar10,uVar8,uVar5,0);
                  FUN_033a2f1c(uVar5,0);
                  return 0;
                }
              }
            }
          }
        }
        goto LAB_0337e130;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < *(int *)(unaff_x25 + 0x18));
  }
  uVar12 = FUN_034b2ac0(in_stack_00000018,0);
  if ((uVar12 & 1) != 0) {
    uVar5 = FUN_02308ab0(plVar4,*(undefined8 *)
                                 Method_UnityEngine_GameObject_GetComponent<ITTSRuntimeCacheHandler>__
                        );
    FUN_034b2bf4(in_stack_00000018,0,uVar5,0);
    return 1;
  }
  plVar15 = *(long **)(in_stack_00000010 + 0x20);
  if (plVar15 != (long *)0x0) {
    lVar11 = *plVar15;
    uVar5 = *(undefined8 *)(unaff_x27 + 0x10);
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_UnityEngine_GameObject_GetComponent<Interactable>__) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0337dd48;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar15,*(long *)
                                   Method_UnityEngine_GameObject_GetComponent<Interactable>__,0);
LAB_0337dd48:
    plVar15 = (long *)(*(code *)*puVar6)(plVar15,uVar5,puVar6[1]);
    if (plVar15 != (long *)0x0) {
      lVar11 = *plVar15;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_UnityEngine_GameObject_GetComponent<Image>__) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0337ddbc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar15,*(long *)Method_UnityEngine_GameObject_GetComponent<Image>__,0);
LAB_0337ddbc:
      plVar15 = (long *)(*(code *)*puVar6)(plVar15,puVar6[1]);
      puVar3 = Method_UnityEngine_GameObject_GetComponent<InputField>__;
      puVar2 = Method_UnityEngine_GameObject_GetComponent<ITTSRuntimeCacheHandler>__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      do {
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = *plVar15;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0337de48;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar1,0);
LAB_0337de48:
        uVar12 = (*(code *)*puVar6)(plVar15,puVar6[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar15 == (long *)0x0) {
            return 1;
          }
          lVar11 = *plVar15;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_0337dfc4;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0337dfac;
        }
        lVar11 = *plVar15;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto FUN_0337dea4;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar3,0);
FUN_0337dea4:
        uVar5 = (*(code *)*puVar6)(plVar15,puVar6[1]);
        uVar10 = FUN_02308ab0(plVar4,*(undefined8 *)puVar2);
        FUN_034b2bf4(in_stack_00000018,uVar5,uVar10,0);
      } while( true );
    }
  }
LAB_0337e130:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0337dfac:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0337dfe0;
    }
  }
LAB_0337dfc4:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar15,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0337dfe0:
  (*(code *)*puVar6)(plVar15,puVar6[1]);
  return 1;
}


