/*
FUNCTION_NAME: FUN_03297ee0
ENTRY_POINT: 03297ee0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_18;telemetry_or_network_hits_3
*/


void FUN_03297ee0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  if ((DAT_03ff5786 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d86130);
    thunk_FUN_01ad9084(PTR_DAT_03d86138);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d86140);
    thunk_FUN_01ad9084(PTR_DAT_03d86148);
    thunk_FUN_01ad9084(PTR_DAT_03d86150);
    DAT_03ff5786 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_4 + 0x30) == 0) goto LAB_03298214;
  if (*(char *)(*(long *)(param_4 + 0x30) + 0xc0) != '\0') {
    uVar9 = *(undefined8 *)(param_4 + 0x20);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_03923030(uVar9,0);
    if (((uVar6 & 1) != 0) && (iVar3 = FUN_03925ea4(0), iVar3 != *(int *)(param_4 + 0x40))) {
      uVar4 = FUN_03925ea4(0);
      lVar10 = *(long *)(param_4 + 0x30);
      *(undefined4 *)(param_4 + 0x40) = uVar4;
      if (lVar10 == 0) {
LAB_03298214:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(char *)(lVar10 + 0xa1) != '\0') {
        lVar7 = *(long *)(param_4 + 0x20);
        if (lVar7 == 0) goto LAB_03298214;
        if (*(char *)(lVar7 + 0xbc) != '\0') {
          uVar9 = *(undefined8 *)(lVar7 + 0xc0);
          uVar4 = *(undefined4 *)(param_4 + 0x28);
          uVar5 = FUN_032a7cd8(lVar7,1,0);
          FUN_03294a98(lVar10,uVar9,uVar4,uVar5 & 1,0);
          lVar10 = *(long *)(param_4 + 0x30);
          if (lVar10 == 0) goto LAB_03298214;
        }
      }
      if (*(char *)(lVar10 + 0xa0) != '\0') {
        uVar9 = *(undefined8 *)(param_4 + 0x38);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar6 = FUN_03923030(uVar9,0);
        puVar1 = PTR_DAT_03d86150;
        if ((uVar6 & 1) != 0) {
          lVar10 = *(long *)(param_4 + 0x38);
          if (lVar10 != 0) {
            if (*(char *)(lVar10 + 0x99) == '\0') {
              return;
            }
            uVar9 = *(undefined8 *)(lVar10 + 0xa0);
            lVar10 = *(long *)PTR_DAT_03d86150;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar10 = *(long *)puVar1;
            }
            lVar7 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
            if (lVar7 == 0) {
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar10 = *(long *)puVar1;
              }
              uVar11 = **(undefined8 **)(lVar10 + 0xb8);
              lVar7 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d86138);
              FUN_028b6724(lVar7,uVar11,*(undefined8 *)PTR_DAT_03d86140,0);
              plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
              *plVar8 = lVar7;
              thunk_FUN_01b4f09c(plVar8,lVar7);
            }
            puVar2 = PTR_DAT_03d86130;
            lVar10 = FUN_01eb3094(uVar9,lVar7,*(undefined8 *)PTR_DAT_03d86130);
            if (*(long *)(param_4 + 0x38) != 0) {
              lVar7 = *(long *)puVar1;
              uVar9 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0xa0);
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar7 = *(long *)puVar1;
              }
              lVar12 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
              if (lVar12 == 0) {
                if (*(int *)(lVar7 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar7 = *(long *)puVar1;
                }
                uVar11 = **(undefined8 **)(lVar7 + 0xb8);
                lVar12 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d86138);
                FUN_028b6724(lVar12,uVar11,*(undefined8 *)PTR_DAT_03d86148,0);
                plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
                *plVar8 = lVar12;
                thunk_FUN_01b4f09c(plVar8,lVar12);
              }
              lVar7 = FUN_01eb3094(uVar9,lVar12,*(undefined8 *)puVar2);
              if ((lVar10 != 0) && (*(long *)(lVar10 + 0x18) != 0)) {
                lVar12 = *(long *)(param_4 + 0x30);
                uVar9 = FUN_03928d34(*(long *)(lVar10 + 0x18),0);
                if (*(long *)(param_4 + 0x20) != 0) {
                  uVar4 = *(undefined4 *)(param_4 + 0x28);
                  uVar5 = FUN_032a7cd8(*(long *)(param_4 + 0x20),1,0);
                  if ((lVar7 != 0) && (lVar12 != 0)) {
                    FUN_03295048(uVar9,param_2,param_3,lVar12,uVar4,uVar5 & 1,
                                 *(undefined8 *)(lVar7 + 0x18));
                    return;
                  }
                }
              }
            }
          }
          goto LAB_03298214;
        }
      }
    }
  }
  return;
}


