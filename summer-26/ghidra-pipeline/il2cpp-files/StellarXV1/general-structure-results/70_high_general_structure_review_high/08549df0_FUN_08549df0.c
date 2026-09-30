/*
FUNCTION_NAME: FUN_08549df0
ENTRY_POINT: 08549df0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_08549df0(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_38;
  
  if ((DAT_0989d9d5 & 1) == 0) {
    FUN_04077588(PTR_DAT_0932c838);
    FUN_04077588(PTR_DAT_0932c538);
    FUN_04077588(PTR_DAT_0932e348);
    FUN_04077588(PTR_DAT_0932e338);
    FUN_04077588(PTR_DAT_0932e350);
    FUN_04077588(PTR_DAT_0932e340);
    DAT_0989d9d5 = 1;
  }
  local_38 = 0;
  if (*param_3 != 0) {
    local_38 = FUN_084f7088(*param_3,*(undefined8 *)PTR_DAT_0932c838);
    FUN_08548e5c(param_1,param_1 + 200);
    FUN_085483e0(param_1,param_1 + 0x158,&local_38);
    if (*(long *)(param_1 + 0x158) != 0) {
      bVar2 = *(byte *)(*(long *)(param_1 + 0x158) + 0x14);
      iVar9 = 1;
      if (bVar2 != 0) {
        iVar9 = 2;
      }
      puVar6 = (undefined8 *)FUN_08589dfc(param_3 + 1,0);
      uVar7 = *puVar6;
      uVar12 = *(undefined8 *)((long)puVar6 + 0x14);
      uVar11 = *(undefined8 *)((long)puVar6 + 0xc);
      lVar8 = param_1 + 0x120;
      uVar14 = puVar6[5];
      uVar13 = puVar6[4];
      uVar1 = *(undefined4 *)(puVar6 + 6);
      *(undefined4 *)(param_1 + 0x128) = 1;
      iVar3 = 0;
      if (iVar9 != 0) {
        iVar3 = (int)uVar7 / iVar9;
      }
      *(undefined8 *)(param_1 + 0x120) = uVar7;
      *(undefined8 *)(param_1 + 0x134) = uVar12;
      *(undefined8 *)(param_1 + 300) = uVar11;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(undefined8 *)(param_1 + 0x148) = uVar14;
      *(undefined8 *)(param_1 + 0x140) = uVar13;
      *(undefined4 *)(param_1 + 0x150) = uVar1;
      iVar4 = 0;
      if (iVar9 != 0) {
        iVar4 = (int)((ulong)uVar7 >> 0x20) / iVar9;
      }
      *(int *)(param_1 + 0x120) = iVar3;
      *(int *)(param_1 + 0x124) = iVar4;
      if ((*(char *)(param_1 + 0xb8) == '\0') || (*(int *)(param_1 + 0x100) < 1)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0x10;
      }
      FUN_089af880(lVar8,uVar7,0);
      puVar5 = PTR_DAT_0932c538;
      lVar10 = *(long *)(param_1 + 0xf8);
      if (lVar10 != 0) {
        if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (*(int *)(lVar10 + 0x18) == 0) {
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        FUN_0855b8d0(0,lVar10 + 0x20,lVar8,1,1,1,*(undefined8 *)PTR_DAT_0932e340,0);
        lVar10 = *(long *)(param_1 + 0xf8);
        if (lVar10 != 0) {
          if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0)
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
          ;
          FUN_0855b8d0(0,lVar10 + 0x28,lVar8,1,1,1,*(undefined8 *)PTR_DAT_0932e338,0);
          lVar10 = *(long *)(param_1 + 0xf8);
          if (lVar10 != 0) {
            if (*(uint *)(lVar10 + 0x18) < 3)
            goto 
            Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
            ;
            FUN_0855b8d0(0,lVar10 + 0x30,lVar8,1,1,1,*(undefined8 *)PTR_DAT_0932e348,0);
            uVar7 = NEON_ushl(*(undefined8 *)(param_1 + 0x120),(ulong)CONCAT14(bVar2,(uint)bVar2),4)
            ;
            *(undefined8 *)(param_1 + 0x120) = uVar7;
            FUN_089af880(lVar8,(ulong)*(byte *)(param_1 + 0xb8) << 4,0);
            lVar10 = *(long *)(param_1 + 0xf8);
            if (lVar10 != 0) {
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0)
              goto 
              Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
              ;
              FUN_0855b8d0(0,lVar10 + 0x38,lVar8,1,1,1,*(undefined8 *)PTR_DAT_0932e350,0);
              lVar8 = *(long *)(param_1 + 0xf8);
              if (lVar8 != 0) {
                if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0)
                goto 
                Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
                ;
                FUN_08542848(param_2,*(undefined8 *)(lVar8 + 0x38));
                if (*(long *)(param_1 + 0x158) != 0) {
                  if (*(char *)(*(long *)(param_1 + 0x158) + 0x15) == '\0') {
                    lVar8 = *(long *)(param_1 + 0xf8);
                    if (lVar8 == 0) goto LAB_0854a120;
                    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0)
                    goto 
                    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
                    ;
                    uVar7 = *(undefined8 *)(lVar8 + 0x38);
                  }
                  else {
                    if (*(long *)(param_1 + 0x118) == 0) goto LAB_0854a120;
                    uVar7 = FUN_085061d8(*(long *)(param_1 + 0x118),0);
                  }
                  FUN_08505d24(param_1,uVar7,0);
                  FUN_08505e50(0x3f800000,0x3f800000,0x3f800000,0x3f800000,param_1,0,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0854a120:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


