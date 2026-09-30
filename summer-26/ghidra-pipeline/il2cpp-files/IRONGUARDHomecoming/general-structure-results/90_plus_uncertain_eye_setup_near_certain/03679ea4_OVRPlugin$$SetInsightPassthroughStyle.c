/*
FUNCTION_NAME: OVRPlugin$$SetInsightPassthroughStyle
ENTRY_POINT: 03679ea4
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

byte OVRPlugin__SetInsightPassthroughStyle(ulong param_1,ulong param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  float unaff_w24;
  byte unaff_w25;
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
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  float fStack000000000000006c;
  undefined4 in_stack_00000070;
  
  do {
    fVar15 = fStack0000000000000038;
    fVar11 = (float)FUN_04067364(param_1,param_2,fStack0000000000000038,uStack000000000000003c,0);
    uVar9 = (ulong)(uint)((float)param_2 * unaff_s12);
    fVar15 = fVar15 * unaff_s12;
    fVar12 = (float)FUN_04067a1c(fVar11 * unaff_s12,0);
    iVar6 = 0;
    fVar11 = fVar15;
    do {
      while( true ) {
        fVar13 = fVar12;
        if (((iVar6 != 0) && (fVar13 = fVar11, iVar6 != 2)) && (fVar13 = (float)uVar9, iVar6 != 1))
        {
          thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                            );
          uVar4 = thunk_FUN_01f117cc();
          uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__);
          FUN_03566764(uVar4,uVar5,0);
          uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar4,uVar5);
        }
        if (fVar13 <= unaff_w24) break;
        if (iVar6 == 0) {
          fVar12 = fVar12 + unaff_w29;
        }
        else if (iVar6 == 1) {
          uVar9 = (ulong)(uint)((float)uVar9 + unaff_w29);
        }
        else {
          if (iVar6 != 2) {
            thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                              );
            uVar4 = thunk_FUN_01f117cc();
            uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__
                                      );
            FUN_03566764(uVar4,uVar5,0);
            uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar4,uVar5);
          }
          fVar11 = fVar11 + unaff_w29;
        }
      }
      while( true ) {
        fVar16 = (float)uVar9;
        fVar13 = fVar12;
        if (((iVar6 != 0) && (fVar13 = fVar11, iVar6 != 2)) && (fVar13 = fVar16, iVar6 != 1)) {
          thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                            );
          uVar4 = thunk_FUN_01f117cc();
          uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__);
          FUN_03566764(uVar4,uVar5,0);
          uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar4,uVar5);
        }
        if (unaff_w27 <= fVar13) break;
        if (iVar6 == 0) {
          fVar12 = fVar12 + unaff_w26;
        }
        else if (iVar6 == 1) {
          uVar9 = (ulong)(uint)(fVar16 + unaff_w26);
        }
        else {
          if (iVar6 != 2) {
            thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerUpEvent>__
                              );
            uVar4 = thunk_FUN_01f117cc();
            uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_3__
                                      );
            FUN_03566764(uVar4,uVar5,0);
            uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Expose_<>c_<Definition>b__25_4__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar4,uVar5);
          }
          fVar11 = fVar11 + unaff_w26;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 3);
    fVar13 = fStack000000000000006c;
    fVar14 = (float)FUN_0367a2fc();
    if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_02ba5908(*(long *)(unaff_x20 + 0x50),unaff_x21,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_40__);
    bVar2 = unaff_w25 & unaff_s11 < fVar11 * fVar15 + fVar12 * fVar14 + fVar16 * fVar13;
    do {
      do {
        do {
          unaff_w25 = bVar2;
          lVar8 = *unaff_x19;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)
                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_03679cc0;
              }
              uVar9 = uVar9 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03679cc0:
          uVar9 = (*(code *)*puVar3)();
          if ((uVar9 & 1) == 0) {
            if (unaff_x19 == (long *)0x0) {
              return unaff_w25;
            }
            lVar8 = *unaff_x19;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 == 0) goto LAB_0367a068;
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_0367a050;
          }
          lVar8 = *unaff_x19;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_39__)
              {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_03679d24;
              }
              uVar9 = uVar9 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03679d24:
          unaff_x21 = (*(code *)*puVar3)();
          plVar10 = *(long **)(unaff_x20 + 0x28);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar8 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x28) {
                puVar3 = (undefined8 *)(lVar8 + (long)(*piVar7 + 0x12) * 0x10 + 0x138);
                goto LAB_03679d8c;
              }
              uVar9 = uVar9 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*unaff_x28,0x12);
LAB_03679d8c:
          uVar9 = (*(code *)*puVar3)(plVar10,&stack0x00000060,puVar3[1]);
          bVar2 = 0;
        } while ((uVar9 & 1) == 0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar10 = *(long **)(unaff_x20 + 0x28);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = *plVar10;
        uVar1 = *(undefined4 *)(unaff_x21 + 0x14);
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x28) {
              puVar3 = (undefined8 *)(lVar8 + (long)(*piVar7 + 9) * 0x10 + 0x138);
              goto LAB_03679e04;
            }
            uVar9 = uVar9 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*unaff_x28,9);
LAB_03679e04:
        uVar9 = (*(code *)*puVar3)(plVar10,uVar1,&stack0x00000040,puVar3[1]);
        bVar2 = 0;
      } while ((uVar9 & 1) == 0);
      plVar10 = *(long **)(unaff_x20 + 0x60);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar10;
      uVar1 = *(undefined4 *)(unaff_x21 + 0x14);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_48__) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_03679e84;
          }
          uVar9 = uVar9 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_48__
                            ,1);
LAB_03679e84:
      uVar9 = (*(code *)*puVar3)(plVar10,uVar1,&stack0x00000030,puVar3[1]);
      bVar2 = 0;
    } while ((uVar9 & 1) == 0);
    param_1 = (ulong)uStack0000000000000030;
    param_2 = (ulong)uStack0000000000000034;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar7 = piVar7 + 4;
    if (uVar9 == 0) break;
LAB_0367a050:
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


