/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_participant_removed_t_is_current_user_get
ENTRY_POINT: 08549e30
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_removed_t_is_current_user_get
               (void)

{
  long lVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_0932e348);
  FUN_04077588(PTR_DAT_0932e338);
  FUN_04077588(PTR_DAT_0932e350);
  FUN_04077588(PTR_DAT_0932e340);
  *(undefined1 *)(unaff_x22 + 0x9d5) = 1;
  if (*unaff_x21 != 0) {
    FUN_084f7088(*unaff_x21,*(undefined8 *)PTR_DAT_0932c838);
    FUN_08548e5c();
    FUN_085483e0();
    if (*(long *)(unaff_x19 + 0x158) != 0) {
      bVar3 = *(byte *)(*(long *)(unaff_x19 + 0x158) + 0x14);
      iVar9 = 1;
      if (bVar3 != 0) {
        iVar9 = 2;
      }
      puVar7 = (undefined8 *)FUN_08589dfc(unaff_x21 + 1,0);
      uVar8 = *puVar7;
      uVar12 = *(undefined8 *)((long)puVar7 + 0x14);
      uVar11 = *(undefined8 *)((long)puVar7 + 0xc);
      lVar1 = unaff_x19 + 0x120;
      uVar14 = puVar7[5];
      uVar13 = puVar7[4];
      uVar2 = *(undefined4 *)(puVar7 + 6);
      *(undefined4 *)(unaff_x19 + 0x128) = 1;
      iVar4 = 0;
      if (iVar9 != 0) {
        iVar4 = (int)uVar8 / iVar9;
      }
      *(undefined8 *)(unaff_x19 + 0x120) = uVar8;
      *(undefined8 *)(unaff_x19 + 0x134) = uVar12;
      *(undefined8 *)(unaff_x19 + 300) = uVar11;
      *(undefined4 *)(unaff_x19 + 0x13c) = 0;
      *(undefined8 *)(unaff_x19 + 0x148) = uVar14;
      *(undefined8 *)(unaff_x19 + 0x140) = uVar13;
      *(undefined4 *)(unaff_x19 + 0x150) = uVar2;
      iVar5 = 0;
      if (iVar9 != 0) {
        iVar5 = (int)((ulong)uVar8 >> 0x20) / iVar9;
      }
      *(int *)(unaff_x19 + 0x120) = iVar4;
      *(int *)(unaff_x19 + 0x124) = iVar5;
      if ((*(char *)(unaff_x19 + 0xb8) == '\0') || (*(int *)(unaff_x19 + 0x100) < 1)) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0x10;
      }
      FUN_089af880(lVar1,uVar8,0);
      puVar6 = PTR_DAT_0932c538;
      lVar10 = *(long *)(unaff_x19 + 0xf8);
      if (lVar10 != 0) {
        if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (*(int *)(lVar10 + 0x18) == 0) {
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        FUN_0855b8d0(0,lVar10 + 0x20,lVar1,1,1,1,*(undefined8 *)PTR_DAT_0932e340,0);
        lVar10 = *(long *)(unaff_x19 + 0xf8);
        if (lVar10 != 0) {
          if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0)
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
          ;
          FUN_0855b8d0(0,lVar10 + 0x28,lVar1,1,1,1,*(undefined8 *)PTR_DAT_0932e338,0);
          lVar10 = *(long *)(unaff_x19 + 0xf8);
          if (lVar10 != 0) {
            if (*(uint *)(lVar10 + 0x18) < 3)
            goto 
            Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
            ;
            FUN_0855b8d0(0,lVar10 + 0x30,lVar1,1,1,1,*(undefined8 *)PTR_DAT_0932e348,0);
            uVar8 = NEON_ushl(*(undefined8 *)(unaff_x19 + 0x120),(ulong)CONCAT14(bVar3,(uint)bVar3),
                              4);
            *(undefined8 *)(unaff_x19 + 0x120) = uVar8;
            FUN_089af880(lVar1,(ulong)*(byte *)(unaff_x19 + 0xb8) << 4,0);
            lVar10 = *(long *)(unaff_x19 + 0xf8);
            if (lVar10 != 0) {
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0)
              goto 
              Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
              ;
              FUN_0855b8d0(0,lVar10 + 0x38,lVar1,1,1,1,*(undefined8 *)PTR_DAT_0932e350,0);
              if (*(long *)(unaff_x19 + 0xf8) != 0) {
                if ((*(uint *)(*(long *)(unaff_x19 + 0xf8) + 0x18) & 0xfffffffc) == 0)
                goto 
                Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
                ;
                FUN_08542848();
                if (*(long *)(unaff_x19 + 0x158) != 0) {
                  if (*(char *)(*(long *)(unaff_x19 + 0x158) + 0x15) == '\0') {
                    if (*(long *)(unaff_x19 + 0xf8) != 0) {
                      if ((*(uint *)(*(long *)(unaff_x19 + 0xf8) + 0x18) & 0xfffffffc) == 0)
                      goto 
                      Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_sessiongroup_handle_get
                      ;
                      goto LAB_0854a0e0;
                    }
                  }
                  else if (*(long *)(unaff_x19 + 0x118) != 0) {
                    FUN_085061d8(*(long *)(unaff_x19 + 0x118),0);
LAB_0854a0e0:
                    FUN_08505d24();
                    FUN_08505e50(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


