/*
FUNCTION_NAME: FUN_03e8b068
ENTRY_POINT: 03e8b068
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


void FUN_03e8b068(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_60;
  undefined4 local_58;
  
                    /* catch() { ... } // from try @ 03e8b044 with catch @ 03e8b068 */
                    /* try { // try from 03e8b06c to 03f8b073 has its CatchHandler @ 03e8b07c */
                    /* try { // try from 03e8b074 to 03f8b07f has its CatchHandler @ 03e8aae8 */
                    /* catch() { ... } // from try @ 03e8b06c with catch @ 03e8b07c */
                    /* try { // try from 03e8b080 to 03f8b173 has its CatchHandler @ 03e8b080
                       catch() { ... } // from try @ 03e8b080 with catch @ 03e8b080
                       catch() { ... } // from try @ 03e8b1a4 with catch @ 03e8b080
                       catch() { ... } // from try @ 03e8b208 with catch @ 03e8b080
                       catch() { ... } // from try @ 03e8b238 with catch @ 03e8b080
                       catch() { ... } // from try @ 03e8b25c with catch @ 03e8b080 */
  if ((DAT_08975bce & 1) == 0) {
    FUN_03a8a718(PTR_DAT_0848f8c0);
    FUN_03a8a718(PTR_DAT_0848e890);
    FUN_03a8a718(PTR_DAT_0848e898);
    FUN_03a8a718(PTR_DAT_0848e830);
    FUN_03a8a718(PTR_DAT_08487ab8);
    FUN_03a8a718(PTR_DAT_08487a70);
    FUN_03a8a718(PTR_DAT_0848e750);
    FUN_03a8a718(PTR_DAT_0848e660);
    FUN_03a8a718(PTR_DAT_08486738);
    FUN_03a8a718(PTR_DAT_08487508);
    FUN_03a8a718(PTR_DAT_0848ee78);
    DAT_08975bce = 1;
  }
  puVar1 = PTR_DAT_08486738;
  local_58 = 0;
  local_60 = 0;
  if (param_1 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x140);
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar5 = FUN_07c9e200(uVar9,0,0);
    puVar2 = PTR_DAT_0848e898;
    if ((uVar5 & 1) != 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x140) != 0) &&
       (lVar6 = FUN_04561560(*(long *)(param_1 + 0x140),*(undefined8 *)PTR_DAT_0848e898), lVar6 != 0
       )) {
      uVar9 = FUN_07c6dc88(lVar6,0);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(lVar6);
      }
      uVar5 = FUN_07c9c218(uVar9,0,0);
      if ((uVar5 & 1) == 0) {
        lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e660);
        FUN_07c6e968(lVar6,0);
        if (lVar6 != 0) {
          thunk_FUN_07ca23d0(lVar6,*(undefined8 *)PTR_DAT_0848ee78,0);
          if ((*(long *)(param_1 + 0x140) != 0) &&
             (lVar7 = FUN_04561560(*(long *)(param_1 + 0x140),*(undefined8 *)puVar2), lVar7 != 0)) {
            FUN_07c6dd58(lVar7,lVar6,0);
            if (*(char *)(param_1 + 0xf1) == '\0') {
              lVar6 = FUN_07c99058(param_1,0);
              if (lVar6 != 0) {
                lVar6 = FUN_04561560(lVar6,*(undefined8 *)PTR_DAT_0848f8c0);
                lVar7 = *(long *)puVar1;
                if (*(int *)(lVar7 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4(lVar7);
                }
                uVar5 = FUN_07c9c218(lVar6,0,0);
                if ((uVar5 & 1) == 0) {
                  return;
                }
                if (lVar6 != 0) {
                  FUN_03d6d89c(lVar6,0,1,0);
                  return;
                }
              }
            }
            else if (*(long *)(param_1 + 0x110) != 0) {
              System_Array__IndexOfImpl<SerializedCommand>(*(long *)(param_1 + 0x110),0);
              if (*(long *)(param_1 + 0x110) != 0) {
                System_Array__IndexOfImpl<Vector4>(*(long *)(param_1 + 0x110),0);
                if (*(long *)(param_1 + 0x110) != 0) {
                  FUN_03f26eac(*(long *)(param_1 + 0x110),0);
                  return;
                }
              }
            }
          }
        }
      }
      else if ((*(long *)(param_1 + 0x140) != 0) &&
              (lVar6 = FUN_04561560(*(long *)(param_1 + 0x140),*(undefined8 *)puVar2), lVar6 != 0))
      {
        lVar6 = FUN_07c6dc88(lVar6,0);
        if (*(long *)(param_1 + 0x150) != 0) {
          lVar7 = FUN_03a8a804(*(undefined8 *)PTR_DAT_08487508,
                               *(undefined4 *)(*(long *)(param_1 + 0x150) + 0x18));
          lVar8 = *(long *)(param_1 + 0x150);
          if (((lVar8 != 0) &&
              (FUN_06774b90(lVar8,lVar7,*(undefined4 *)(lVar8 + 0x18),0), lVar6 != 0)) &&
             (lVar8 = FUN_07c721e4(lVar6,0), lVar8 != 0)) {
            if (*(int *)(lVar8 + 0x18) == 0) {
              return;
            }
            FUN_07c73a5c(lVar6,0);
            puVar1 = PTR_DAT_08487a70;
            lVar8 = *(long *)(param_1 + 0x1f8);
            if (lVar8 != 0) {
              iVar10 = 0;
              do {
                if (*(int *)(lVar8 + 0x18) <= iVar10) {
                  FUN_07c72230(lVar6,lVar7,0);
                  FUN_07c74c60(lVar6,0);
                  FUN_07c74ba0(lVar6,0);
                  if ((*(long *)(param_1 + 0x140) == 0) ||
                     (lVar8 = FUN_04561560(*(long *)(param_1 + 0x140),*(undefined8 *)puVar2),
                     lVar8 == 0)) break;
                  FUN_07c6dd58(lVar8,lVar6,0);
                  puVar1 = PTR_DAT_0848e890;
                  if ((*(long *)(param_1 + 0x140) == 0) ||
                     (lVar8 = FUN_04561560(*(long *)(param_1 + 0x140),
                                           *(undefined8 *)PTR_DAT_0848e890), lVar8 == 0)) break;
                  FUN_07d2decc(lVar8,0,0);
                  if ((*(long *)(param_1 + 0x140) == 0) ||
                     (lVar8 = FUN_04561560(*(long *)(param_1 + 0x140),*(undefined8 *)puVar1),
                     lVar8 == 0)) break;
                  FUN_07d2decc(lVar8,lVar6,0);
                  if (*(long *)(param_1 + 0x2a8) == 0) break;
                  if (*(char *)(*(long *)(param_1 + 0x2a8) + 0x409) != '\0') {
                    if ((*(long *)(param_1 + 0x140) == 0) ||
                       (lVar6 = FUN_04561560(*(long *)(param_1 + 0x140),*(undefined8 *)puVar1),
                       lVar6 == 0)) break;
                    FUN_07d24650(lVar6,0,0);
                    if (*(long *)(param_1 + 0x140) == 0) break;
                    FUN_07c9c8e4(*(long *)(param_1 + 0x140),0,0);
                    if (*(long *)(param_1 + 0x140) == 0) break;
                    FUN_07c9c8e4(*(long *)(param_1 + 0x140),1,0);
                  }
                  puVar1 = PTR_DAT_0848e750;
                  lVar6 = *(long *)(param_1 + 0x20);
                  if (lVar6 != 0) {
                    iVar10 = 0;
                    goto LAB_03e8b520;
                  }
                  break;
                }
                lVar11 = *(long *)(param_1 + 0x150);
                if (lVar11 == 0) break;
                iVar3 = FUN_04d8be94(lVar8,iVar10,*(undefined8 *)puVar1);
                if (iVar3 < *(int *)(lVar11 + 0x18)) {
                  if (*(long *)(param_1 + 0x140) == 0) break;
                  lVar8 = FUN_07c9c69c(*(long *)(param_1 + 0x140),0);
                  if (*(long *)(param_1 + 0x1f8) == 0) break;
                  lVar11 = *(long *)(param_1 + 0x150);
                  uVar4 = FUN_04d8be94(*(long *)(param_1 + 0x1f8),iVar10,*(undefined8 *)puVar1);
                  if (lVar11 == 0) break;
                  if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_03e8b704;
                  if (lVar8 == 0) break;
                  lVar11 = lVar11 + (long)(int)uVar4 * 0xc;
                  uVar13 = *(undefined4 *)(lVar11 + 0x24);
                  uVar14 = *(undefined4 *)(lVar11 + 0x28);
                  uVar12 = FUN_07cade68(*(undefined4 *)(lVar11 + 0x20),lVar8,0);
                  local_60 = CONCAT44(uVar13,uVar12);
                  local_58 = uVar14;
                  if (*(long *)(param_1 + 0x2a8) == 0) break;
                  FUN_03fb45dc(*(long *)(param_1 + 0x2a8),&local_60,0);
                  if ((*(long *)(param_1 + 0x140) == 0) ||
                     (lVar8 = FUN_07c9c69c(*(long *)(param_1 + 0x140),0), lVar8 == 0)) break;
                  uVar12 = FUN_07cadf5c(local_60 & 0xffffffff,lVar8,0);
                  local_60 = CONCAT44(local_60._4_4_,uVar12);
                  if ((*(long *)(param_1 + 0x1f8) == 0) ||
                     (uVar4 = FUN_04d8be94(*(long *)(param_1 + 0x1f8),iVar10,*(undefined8 *)puVar1),
                     lVar7 == 0)) break;
                  if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_03e8b704;
                  lVar8 = lVar7 + (long)(int)uVar4 * 0xc;
                  *(ulong *)(lVar8 + 0x20) = local_60;
                  *(undefined4 *)(lVar8 + 0x28) = local_58;
                }
                lVar8 = *(long *)(param_1 + 0x1f8);
                iVar10 = iVar10 + 1;
              } while (lVar8 != 0);
            }
          }
        }
      }
    }
  }
  goto LAB_03e8b684;
LAB_03e8b520:
  do {
    if (*(int *)(lVar6 + 0x18) <= iVar10) {
      return;
    }
    lVar6 = FUN_04de82e0(lVar6,iVar10,*(undefined8 *)puVar1);
    if ((lVar6 == 0) || (lVar7 == 0)) break;
    if (*(int *)(lVar6 + 0x1b8) < *(int *)(lVar7 + 0x18)) {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (lVar6 = FUN_04de82e0(*(long *)(param_1 + 0x20),iVar10,*(undefined8 *)puVar1), lVar6 == 0))
      break;
      if (-1 < *(int *)(lVar6 + 0x1b8)) {
        if (*(long *)(param_1 + 0x20) == 0) break;
        lVar6 = FUN_04de82e0(*(long *)(param_1 + 0x20),iVar10,*(undefined8 *)puVar1);
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (lVar8 = FUN_04de82e0(*(long *)(param_1 + 0x20),iVar10,*(undefined8 *)puVar1), lVar8 == 0
           )) break;
        if (*(uint *)(lVar7 + 0x18) <= *(uint *)(lVar8 + 0x1b8)) {
LAB_03e8b704:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        if (lVar6 == 0) break;
        lVar8 = lVar7 + (long)(int)*(uint *)(lVar8 + 0x1b8) * 0xc;
        uVar12 = *(undefined4 *)(lVar8 + 0x28);
        *(undefined8 *)(lVar6 + 0x1dc) = *(undefined8 *)(lVar8 + 0x20);
        *(undefined4 *)(lVar6 + 0x1e4) = uVar12;
      }
    }
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar6 = FUN_04de82e0(*(long *)(param_1 + 0x20),iVar10,*(undefined8 *)puVar1), lVar6 == 0))
    break;
    if (*(int *)(lVar6 + 0x1bc) < *(int *)(lVar7 + 0x18)) {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (lVar6 = FUN_04de82e0(*(long *)(param_1 + 0x20),iVar10,*(undefined8 *)puVar1), lVar6 == 0))
      break;
      if (-1 < *(int *)(lVar6 + 0x1bc)) {
        if (*(long *)(param_1 + 0x20) == 0) break;
        lVar6 = FUN_04de82e0(*(long *)(param_1 + 0x20),iVar10,*(undefined8 *)puVar1);
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (lVar8 = FUN_04de82e0(*(long *)(param_1 + 0x20),iVar10,*(undefined8 *)puVar1), lVar8 == 0
           )) break;
        if (*(uint *)(lVar7 + 0x18) <= *(uint *)(lVar8 + 0x1bc)) goto LAB_03e8b704;
        if (lVar6 == 0) break;
        lVar8 = lVar7 + (long)(int)*(uint *)(lVar8 + 0x1bc) * 0xc;
        uVar12 = *(undefined4 *)(lVar8 + 0x28);
        *(undefined8 *)(lVar6 + 500) = *(undefined8 *)(lVar8 + 0x20);
        *(undefined4 *)(lVar6 + 0x1fc) = uVar12;
      }
    }
    lVar6 = *(long *)(param_1 + 0x20);
    iVar10 = iVar10 + 1;
  } while (lVar6 != 0);
LAB_03e8b684:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


