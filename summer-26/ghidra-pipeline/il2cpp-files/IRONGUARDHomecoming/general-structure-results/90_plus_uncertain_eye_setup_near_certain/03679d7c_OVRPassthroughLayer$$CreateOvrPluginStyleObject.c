/*
FUNCTION_NAME: OVRPassthroughLayer$$CreateOvrPluginStyleObject
ENTRY_POINT: 03679d7c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0367a200) */

byte OVRPassthroughLayer__CreateOvrPluginStyleObject(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int *in_x10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar9;
  float unaff_w24;
  byte unaff_w25;
  byte bVar10;
  float unaff_w26;
  float unaff_w27;
  long *unaff_x28;
  float unaff_w29;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s11;
  float unaff_s12;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  float fStack000000000000006c;
  undefined4 in_stack_00000070;
  
code_r0x03679d7c:
  puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x12) * 0x10 + 0x138);
  bVar10 = unaff_w25;
  do {
    uVar2 = (*(code *)*puVar3)(unaff_x22,&stack0x00000060,puVar3[1]);
    unaff_w25 = 0;
    if ((uVar2 & 1) != 0) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar9 = *(long **)(unaff_x20 + 0x28);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar9;
      uVar1 = *(undefined4 *)(unaff_x21 + 0x14);
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x28) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar7 + 9) * 0x10 + 0x138);
            goto LAB_03679e04;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar9,*unaff_x28,9);
LAB_03679e04:
      uVar2 = (*(code *)*puVar3)(plVar9,uVar1,&stack0x00000040,puVar3[1]);
      unaff_w25 = 0;
      if ((uVar2 & 1) != 0) {
        plVar9 = *(long **)(unaff_x20 + 0x60);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = *plVar9;
        uVar1 = *(undefined4 *)(unaff_x21 + 0x14);
        uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_48__) {
              puVar3 = (undefined8 *)(lVar8 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_03679e84;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01ecb238(plVar9,*(long *)
                                      Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_48__
                              ,1);
LAB_03679e84:
        uVar2 = (*(code *)*puVar3)(plVar9,uVar1,&stack0x00000030,puVar3[1]);
        unaff_w25 = 0;
        if ((uVar2 & 1) != 0) {
          fVar14 = fStack0000000000000038;
          fVar15 = fStack0000000000000034;
          fVar11 = (float)FUN_04067364(uStack0000000000000030,fStack0000000000000034,
                                       fStack0000000000000038,uStack000000000000003c,0);
          uVar2 = (ulong)(uint)(fVar15 * unaff_s12);
          fVar14 = fVar14 * unaff_s12;
          fVar11 = (float)FUN_04067a1c(fVar11 * unaff_s12,0);
          iVar6 = 0;
          fVar15 = fVar14;
          do {
            while( true ) {
              fVar12 = fVar11;
              if (((iVar6 != 0) && (fVar12 = fVar15, iVar6 != 2)) &&
                 (fVar12 = (float)uVar2, iVar6 != 1)) {
                thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                                  );
                uVar4 = thunk_FUN_01f117cc();
                uVar5 = thunk_FUN_01efb3a4(
                                          Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__
                                          );
                FUN_03566764(uVar4,uVar5,0);
                uVar5 = thunk_FUN_01efb3a4(
                                          Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__
                                          );
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar4,uVar5);
              }
              if (fVar12 <= unaff_w24) break;
              if (iVar6 == 0) {
                fVar11 = fVar11 + unaff_w29;
              }
              else if (iVar6 == 1) {
                uVar2 = (ulong)(uint)((float)uVar2 + unaff_w29);
              }
              else {
                if (iVar6 != 2) {
                  thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                                    );
                  uVar4 = thunk_FUN_01f117cc();
                  uVar5 = thunk_FUN_01efb3a4(
                                            Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__
                                            );
                  FUN_03566764(uVar4,uVar5,0);
                  uVar5 = thunk_FUN_01efb3a4(
                                            Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__
                                            );
                    /* WARNING: Subroutine does not return */
                  FUN_01f08910(uVar4,uVar5);
                }
                fVar15 = fVar15 + unaff_w29;
              }
            }
            while( true ) {
              fVar16 = (float)uVar2;
              fVar12 = fVar11;
              if (((iVar6 != 0) && (fVar12 = fVar15, iVar6 != 2)) && (fVar12 = fVar16, iVar6 != 1))
              {
                thunk_FUN_01efb3a4(
                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                                  );
                uVar4 = thunk_FUN_01f117cc();
                uVar5 = thunk_FUN_01efb3a4(
                                          Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__
                                          );
                FUN_03566764(uVar4,uVar5,0);
                uVar5 = thunk_FUN_01efb3a4(
                                          Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__
                                          );
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar4,uVar5);
              }
              if (unaff_w27 <= fVar12) break;
              if (iVar6 == 0) {
                fVar11 = fVar11 + unaff_w26;
              }
              else if (iVar6 == 1) {
                uVar2 = (ulong)(uint)(fVar16 + unaff_w26);
              }
              else {
                if (iVar6 != 2) {
                  thunk_FUN_01efb3a4(
                                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                                    );
                  uVar4 = thunk_FUN_01f117cc();
                  uVar5 = thunk_FUN_01efb3a4(
                                            Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__
                                            );
                  FUN_03566764(uVar4,uVar5,0);
                  uVar5 = thunk_FUN_01efb3a4(
                                            Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__
                                            );
                    /* WARNING: Subroutine does not return */
                  FUN_01f08910(uVar4,uVar5);
                }
                fVar15 = fVar15 + unaff_w26;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 != 3);
          fVar12 = fStack000000000000006c;
          fVar13 = (float)FUN_0367a2fc();
          if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_02ba5908(*(long *)(unaff_x20 + 0x50),unaff_x21,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_40__);
          unaff_w25 = bVar10 & unaff_s11 < fVar15 * fVar14 + fVar11 * fVar13 + fVar16 * fVar12;
        }
      }
    }
    lVar8 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03679cc0;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03679cc0:
    uVar2 = (*(code *)*puVar3)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return unaff_w25;
      }
      lVar8 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 == 0) goto LAB_0367a068;
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_39__) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03679d24;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03679d24:
    unaff_x21 = (*(code *)*puVar3)();
    unaff_x22 = *(long **)(unaff_x20 + 0x28);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = *unaff_x22;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x28) goto code_r0x03679d7c;
        uVar2 = uVar2 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(unaff_x22,*unaff_x28,0x12);
    bVar10 = unaff_w25;
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0367a084;
    }
  }
LAB_0367a068:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0367a084:
  (*(code *)*puVar3)();
  return unaff_w25;
}


