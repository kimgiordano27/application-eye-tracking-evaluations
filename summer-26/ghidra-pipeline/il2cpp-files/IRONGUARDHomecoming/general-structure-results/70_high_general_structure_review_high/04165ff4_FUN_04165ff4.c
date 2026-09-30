/*
FUNCTION_NAME: FUN_04165ff4
ENTRY_POINT: 04165ff4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


long FUN_04165ff4(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  int local_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  int local_c8;
  int iStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_04840b08 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(PTR_DAT_0458c5f0);
    thunk_FUN_01efb3a4(PTR_DAT_0458c5f8);
    thunk_FUN_01efb3a4(PTR_DAT_0458c600);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0458c608);
    thunk_FUN_01efb3a4(PTR_DAT_0458c610);
    DAT_04840b08 = 1;
  }
  local_78[0] = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_8c = 0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar5 = FUN_03030ef0(*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_0458c600), lVar5 != 0))
  {
    *(undefined4 *)(lVar5 + 0x18) = 1;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (FUN_02b6b2d0(*(long *)(param_1 + 0x18),param_2,lVar5,*(undefined8 *)PTR_DAT_0458c5f0),
       param_2 != 0)) {
      if (*(long *)(param_2 + 0x38) != 0) {
        uVar14 = *(ulong *)(*(long *)(param_2 + 0x38) + 0x18);
        iVar13 = (int)uVar14;
        if (iVar13 != 0) {
          if (*(long *)(param_1 + 0x30) != 0) {
            FUN_04158f60(&local_b0,*(long *)(param_1 + 0x30),uVar14 & 0xffffffff,0);
            iVar3 = (int)local_b0;
            iVar4 = local_b0._4_4_;
            uStack_68 = uStack_a0;
            local_70 = uStack_a8;
            if (local_b0._4_4_ == 0) {
              if (*(char *)(param_1 + 0x38) != '\0') {
                return lVar5;
              }
              if (*(long *)(param_1 + 0x30) != 0) {
                local_8c = FUN_04158d60(*(long *)(param_1 + 0x30),0);
                uVar18 = FUN_035683d0(&local_8c,0);
                if (*(long *)(param_1 + 0x30) != 0) {
                  lVar17 = FUN_04158f58(*(long *)(param_1 + 0x30),0);
                  uVar11 = *(undefined8 *)PTR_DAT_0458c610;
                  uVar15 = *(undefined8 *)PTR_DAT_0458c608;
                  if (lVar17 == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = FUN_040766fc(lVar17,0);
                  }
                  uVar18 = FUN_0340eee0(uVar15,uVar18,uVar11,uVar9,0);
                  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0)
                      == 0) {
                    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__
                                      );
                  }
                  FUN_0403ed64(uVar18,0);
                  *(undefined1 *)(param_1 + 0x38) = 1;
                  return lVar5;
                }
              }
            }
            else {
              plVar6 = *(long **)(param_1 + 0x10);
              if (plVar6 != (long *)0x0) {
                uVar7 = (**(code **)(*plVar6 + 0x178))
                                  (plVar6,param_3,*(undefined8 *)(param_2 + 0x20),local_78,&local_88
                                   ,*(undefined8 *)(*plVar6 + 0x180));
                puVar2 = PTR_DAT_0458c5f8;
                puVar1 = 
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__;
                if ((uVar7 & 1) == 0) {
                  if (0 < iVar13) {
                    iVar16 = 0;
                    lVar17 = 0;
                    do {
                      if (*(long *)(param_1 + 0x28) == 0) goto LAB_041663cc;
                      lVar12 = FUN_03030ef0(*(long *)(param_1 + 0x28),*(undefined8 *)puVar2);
                      if (iVar16 == 0) {
                        *(long *)(lVar5 + 0x20) = lVar12;
                        plVar6 = (long *)(lVar5 + 0x20);
                      }
                      else {
                        if (lVar17 == 0) goto LAB_041663cc;
                        *(long *)(lVar17 + 0x30) = lVar12;
                        plVar6 = (long *)(lVar17 + 0x30);
                      }
                      thunk_FUN_01f51358(plVar6,lVar12);
                      if (lVar12 == 0) goto LAB_041663cc;
                      *(int *)(lVar12 + 0x18) = iVar16;
                      *(int *)(lVar12 + 0x1c) = iVar3 + iVar16;
                      lVar17 = *(long *)puVar1;
                      if (*(int *)(lVar17 + 0xe0) == 0) {
                        thunk_FUN_01ee6d7c();
                        lVar17 = *(long *)puVar1;
                      }
                      iVar16 = iVar16 + 1;
                      *(undefined4 *)(lVar12 + 0x38) = **(undefined4 **)(lVar17 + 0xb8);
                      lVar17 = lVar12;
                    } while (iVar13 != iVar16);
                  }
                  lVar17 = *(long *)(param_1 + 0x30);
                  uStack_a8 = uStack_68;
                  local_b0 = local_70;
                  if (lVar17 != 0) {
                    uVar18 = *(undefined8 *)(param_2 + 0x38);
                    piVar10 = &local_e0;
                    uVar11 = 0;
                    uStack_d0 = uStack_68;
                    local_d8 = local_70;
                    local_e0 = iVar3;
                    iStack_dc = iVar4;
                    goto LAB_04166350;
                  }
                }
                else {
                  if (0 < iVar13) {
                    uVar7 = 0;
                    lVar17 = 0x30;
                    lVar12 = 0;
                    do {
                      if (*(long *)(param_1 + 0x28) == 0) goto LAB_041663cc;
                      lVar8 = FUN_03030ef0(*(long *)(param_1 + 0x28),*(undefined8 *)puVar2);
                      if (uVar7 == 0) {
                        *(long *)(lVar5 + 0x20) = lVar8;
                        plVar6 = (long *)(lVar5 + 0x20);
                      }
                      else {
                        if (lVar12 == 0) goto LAB_041663cc;
                        *(long *)(lVar12 + 0x30) = lVar8;
                        plVar6 = (long *)(lVar12 + 0x30);
                      }
                      thunk_FUN_01f51358(plVar6,lVar8);
                      if (lVar8 == 0) goto LAB_041663cc;
                      *(int *)(lVar8 + 0x18) = (int)uVar7;
                      *(int *)(lVar8 + 0x1c) = iVar3 + (int)uVar7;
                      lVar12 = *(long *)(param_2 + 0x38);
                      if (lVar12 == 0) goto LAB_041663cc;
                      if (*(uint *)(lVar12 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                        FUN_01f08a44();
                      }
                      uVar18 = *(undefined8 *)(lVar12 + lVar17);
                      uVar7 = uVar7 + 1;
                      *(undefined8 *)(lVar8 + 0x28) = ((undefined8 *)(lVar12 + lVar17))[1];
                      *(ulong *)(lVar8 + 0x20) =
                           CONCAT44((int)((ulong)local_88 >> 0x20) + (int)((ulong)uVar18 >> 0x20),
                                    (int)local_88 + (int)uVar18);
                      lVar17 = lVar17 + 0x20;
                      *(undefined4 *)(lVar8 + 0x38) = local_78[0];
                      lVar12 = lVar8;
                    } while ((uVar14 & 0xffffffff) != uVar7);
                  }
                  lVar17 = *(long *)(param_1 + 0x30);
                  uStack_a8 = uStack_68;
                  local_b0 = local_70;
                  if (lVar17 != 0) {
                    uVar11 = *(undefined8 *)(lVar5 + 0x20);
                    uVar18 = *(undefined8 *)(param_2 + 0x38);
                    uStack_b8 = uStack_68;
                    local_c0 = local_70;
                    local_c8 = iVar3;
                    iStack_c4 = iVar4;
                    piVar10 = &local_c8;
LAB_04166350:
                    local_b0 = local_70;
                    uStack_a8 = uStack_68;
                    FUN_0415903c(lVar17,piVar10,uVar18,uVar11,0);
                    return lVar5;
                  }
                }
              }
            }
          }
          goto LAB_041663cc;
        }
      }
      return lVar5;
    }
  }
LAB_041663cc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


