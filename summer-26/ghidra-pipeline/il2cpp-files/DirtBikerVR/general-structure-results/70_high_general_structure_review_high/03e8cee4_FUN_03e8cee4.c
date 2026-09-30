/*
FUNCTION_NAME: FUN_03e8cee4
ENTRY_POINT: 03e8cee4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void FUN_03e8cee4(long param_1,long param_2,undefined4 param_3,undefined8 param_4,long param_5,
                 undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 local_68 [4];
  int local_64;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  int local_58;
  char local_54 [4];
  
  if ((DAT_08975bd6 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_0848f8c0);
    FUN_03a8a718(PTR_DAT_0848f888);
    FUN_03a8a718(PTR_DAT_0848ecc8);
    FUN_03a8a718(PTR_DAT_0848e748);
    FUN_03a8a718(PTR_DAT_0848e750);
    FUN_03a8a718(PTR_DAT_08486738);
    DAT_08975bd6 = 1;
  }
  puVar2 = PTR_DAT_0848e750;
  local_54[0] = '\0';
  local_58 = 0;
  local_5c[0] = 0;
  local_60[0] = 0;
  local_64 = 0;
  local_68[0] = 0;
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0xf5) != '\0') {
      return;
    }
    if ((((*(long *)(param_2 + 0x20) != 0) &&
         (lVar6 = FUN_04de82e0(*(long *)(param_2 + 0x20),param_3,*(undefined8 *)PTR_DAT_0848e750),
         param_5 != 0)) && (*(long *)(param_5 + 0x20) != 0)) &&
       ((lVar7 = FUN_04de82e0(*(long *)(param_5 + 0x20),param_6,*(undefined8 *)puVar2), lVar7 != 0
        && (lVar6 != 0)))) {
      lVar8 = *(long *)(param_2 + 0x20);
      *(undefined1 *)(lVar6 + 0x191) = *(undefined1 *)(lVar7 + 400);
      if (lVar8 != 0) {
        lVar6 = FUN_04de82e0(lVar8,param_3,*(undefined8 *)puVar2);
        if (((*(long *)(param_5 + 0x20) != 0) &&
            (lVar7 = FUN_04de82e0(*(long *)(param_5 + 0x20),param_6,*(undefined8 *)puVar2),
            lVar7 != 0)) && (lVar6 != 0)) {
          lVar8 = *(long *)(param_2 + 0x20);
          *(undefined1 *)(lVar6 + 400) = *(undefined1 *)(lVar7 + 0x191);
          if (((lVar8 != 0) &&
              (lVar6 = FUN_04de82e0(lVar8,param_3,*(undefined8 *)puVar2), lVar6 != 0)) &&
             (((*(char *)(lVar6 + 0x191) != '\0' ||
               ((*(long *)(param_2 + 0x20) != 0 &&
                (lVar6 = FUN_04de82e0(*(long *)(param_2 + 0x20),param_3,*(undefined8 *)puVar2),
                lVar6 != 0)))) && (param_1 != 0)))) {
            if (*(char *)(param_1 + 0x2d4) != '\0') {
              local_54[0] = '\0';
              local_58 = -1;
              local_5c[0] = 1;
              local_60[0] = 0;
              local_64 = -1;
              local_68[0] = 1;
              FUN_03e8d89c(param_2,param_3,local_54,&local_58,local_5c);
              FUN_03e8da04(param_5,param_6,local_60,&local_64,local_68);
              puVar1 = PTR_DAT_0848e748;
              if (local_54[0] == '\0') {
                FUN_03e8da04(param_5,param_6,local_60,&local_64,local_68);
                iVar5 = local_58;
                puVar1 = PTR_DAT_0848e748;
                if (*(char *)(param_5 + 0x129) == '\0') {
                  if (*(long *)(param_2 + 0x28) == 0) goto LAB_03e8d4e4;
                  lVar6 = FUN_04de82e0(*(long *)(param_2 + 0x28),local_58,
                                       *(undefined8 *)PTR_DAT_0848e748);
                  iVar4 = local_64;
                  if (((*(long *)(param_5 + 0x28) == 0) ||
                      (lVar7 = FUN_04de82e0(*(long *)(param_5 + 0x28),local_64,*(undefined8 *)puVar1
                                           ), lVar7 == 0)) || (lVar6 == 0)) goto LAB_03e8d4e4;
                  lVar8 = *(long *)(param_2 + 0x28);
                  *(undefined1 *)(lVar6 + 0x48) = *(undefined1 *)(lVar7 + 0x48);
                  if (lVar8 == 0) goto LAB_03e8d4e4;
                  lVar7 = *(long *)(param_2 + 0x20);
                  lVar6 = FUN_04de82e0(lVar8,iVar5,*(undefined8 *)puVar1);
                  if ((lVar6 == 0) || (lVar7 == 0)) goto LAB_03e8d4e4;
                  lVar6 = FUN_04de82e0(lVar7,*(undefined4 *)(lVar6 + 0x14),*(undefined8 *)puVar2);
                  if (*(long *)(param_5 + 0x28) == 0) goto LAB_03e8d4e4;
                  lVar8 = *(long *)(param_5 + 0x20);
                  lVar7 = FUN_04de82e0(*(long *)(param_5 + 0x28),iVar4,*(undefined8 *)puVar1);
                  if (((lVar7 == 0) || (lVar8 == 0)) ||
                     ((lVar7 = FUN_04de82e0(lVar8,*(undefined4 *)(lVar7 + 0x10),
                                            *(undefined8 *)puVar2), lVar7 == 0 || (lVar6 == 0))))
                  goto LAB_03e8d4e4;
                  *(undefined1 *)(lVar6 + 0x191) = *(undefined1 *)(lVar7 + 400);
                }
              }
              else if (*(char *)(param_5 + 0x129) == '\0') {
                if ((*(long *)(param_5 + 0x28) == 0) ||
                   (lVar6 = FUN_04de82e0(*(long *)(param_5 + 0x28),local_64,
                                         *(undefined8 *)PTR_DAT_0848e748), lVar6 == 0))
                goto LAB_03e8d4e4;
                if (*(char *)(lVar6 + 0x48) != '\0') {
                  if ((*(long *)(param_2 + 0x28) == 0) ||
                     (lVar6 = FUN_04de82e0(*(long *)(param_2 + 0x28),local_58,*(undefined8 *)puVar1)
                     , lVar6 == 0)) goto LAB_03e8d4e4;
                  *(undefined1 *)(lVar6 + 0x48) = 1;
                }
              }
              local_54[0] = '\0';
              local_58 = -1;
              local_5c[0] = 1;
              local_60[0] = 0;
              local_64 = -1;
              local_68[0] = 1;
              FUN_03e8da04(param_2,param_3,local_54,&local_58,local_5c);
              FUN_03e8d89c(param_5,param_6,local_60,&local_64,local_68);
              puVar1 = PTR_DAT_0848e748;
              if (local_54[0] == '\0') {
                FUN_03e8d89c(param_5,param_6,local_60,&local_64,local_68);
                iVar4 = local_58;
                iVar5 = local_64;
                puVar1 = PTR_DAT_0848e748;
                if ((-1 < local_58) && (-1 < local_64)) {
                  if (*(long *)(param_2 + 0x28) == 0) goto LAB_03e8d4e4;
                  lVar6 = FUN_04de82e0(*(long *)(param_2 + 0x28),local_58,
                                       *(undefined8 *)PTR_DAT_0848e748);
                  if (((*(long *)(param_5 + 0x28) == 0) ||
                      (lVar7 = FUN_04de82e0(*(long *)(param_5 + 0x28),iVar5,*(undefined8 *)puVar1),
                      lVar7 == 0)) || (lVar6 == 0)) goto LAB_03e8d4e4;
                  lVar8 = *(long *)(param_2 + 0x28);
                  *(undefined1 *)(lVar6 + 0x48) = *(undefined1 *)(lVar7 + 0x48);
                  if (lVar8 == 0) goto LAB_03e8d4e4;
                  lVar7 = *(long *)(param_2 + 0x20);
                  lVar6 = FUN_04de82e0(lVar8,iVar4,*(undefined8 *)puVar1);
                  if ((lVar6 == 0) || (lVar7 == 0)) goto LAB_03e8d4e4;
                  lVar6 = FUN_04de82e0(lVar7,*(undefined4 *)(lVar6 + 0x10),*(undefined8 *)puVar2);
                  if (*(long *)(param_5 + 0x28) == 0) goto LAB_03e8d4e4;
                  lVar8 = *(long *)(param_5 + 0x20);
                  lVar7 = FUN_04de82e0(*(long *)(param_5 + 0x28),iVar5,*(undefined8 *)puVar1);
                  if (((lVar7 == 0) || (lVar8 == 0)) ||
                     ((lVar7 = FUN_04de82e0(lVar8,*(undefined4 *)(lVar7 + 0x14),
                                            *(undefined8 *)puVar2), lVar7 == 0 || (lVar6 == 0))))
                  goto LAB_03e8d4e4;
                  *(undefined1 *)(lVar6 + 400) = *(undefined1 *)(lVar7 + 0x191);
                }
              }
              else {
                if ((*(long *)(param_5 + 0x28) == 0) ||
                   (lVar6 = FUN_04de82e0(*(long *)(param_5 + 0x28),local_64,
                                         *(undefined8 *)PTR_DAT_0848e748), lVar6 == 0))
                goto LAB_03e8d4e4;
                if (*(char *)(lVar6 + 0x48) != '\0') {
                  if ((*(long *)(param_2 + 0x28) == 0) ||
                     (lVar6 = FUN_04de82e0(*(long *)(param_2 + 0x28),local_58,*(undefined8 *)puVar1)
                     , lVar6 == 0)) goto LAB_03e8d4e4;
                  *(undefined1 *)(lVar6 + 0x48) = 1;
                }
              }
            }
            lVar6 = FUN_07c99058(param_2,0);
            puVar2 = PTR_DAT_0848f8c0;
            if (lVar6 != 0) {
              uVar9 = FUN_04561560(lVar6,*(undefined8 *)PTR_DAT_0848f8c0);
              puVar1 = PTR_DAT_08486738;
              if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
              }
              uVar10 = FUN_07ca21f0(uVar9,0);
              lVar6 = FUN_07c99058(param_2,0);
              puVar3 = PTR_DAT_0848f888;
              if ((uVar10 & 1) == 0) {
                if (lVar6 != 0) {
                  uVar9 = FUN_04561560(lVar6,*(undefined8 *)PTR_DAT_0848f888);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_03ae8be4(*(long *)puVar1);
                  }
                  uVar10 = FUN_07ca21f0(uVar9,0);
                  if ((uVar10 & 1) == 0) {
                    return;
                  }
                  lVar6 = FUN_07c99058(param_2,0);
                  if ((lVar6 != 0) &&
                     (lVar6 = FUN_04561560(lVar6,*(undefined8 *)puVar3), lVar6 != 0)) {
                    System_Array__IndexOfImpl<SerializedCommand>(lVar6,0);
                    System_Array__IndexOfImpl<Vector4>(lVar6,0);
                    FUN_03f26eac(lVar6,0);
                    if (*(long *)(lVar6 + 0x180) != 0) {
                      if (*(int *)(*(long *)(lVar6 + 0x180) + 0x18) < 1) {
                        return;
                      }
                      FUN_03f28a48(lVar6,0);
                      return;
                    }
                  }
                }
              }
              else if ((lVar6 != 0) &&
                      (lVar6 = FUN_04561560(lVar6,*(undefined8 *)puVar2), lVar6 != 0)) {
                FUN_03d6d89c(lVar6,0,1,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03e8d4e4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


