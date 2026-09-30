/*
FUNCTION_NAME: FUN_01e8d96c
ENTRY_POINT: 01e8d96c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


int FUN_01e8d96c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_0234c2e8;
  if ((DAT_0247e2d2 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234ba20);
    FUN_00fdc2e4(PTR_DAT_0234cba8);
    FUN_00fdc2e4(PTR_DAT_0234c1b8);
    FUN_00fdc2e4(PTR_DAT_0235f328);
    FUN_00fdc2e4(PTR_DAT_0234c2e8);
    FUN_00fdc2e4(PTR_DAT_0235c630);
    FUN_00fdc2e4(PTR_DAT_0234bad0);
    FUN_00fdc2e4(PTR_DAT_0234bc58);
    FUN_00fdc2e4(PTR_DAT_0235f4c8);
    FUN_00fdc2e4(PTR_DAT_0235f4d0);
    FUN_00fdc2e4(PTR_DAT_0235f4d8);
    DAT_0247e2d2 = 1;
  }
  puVar2 = PTR_DAT_0235f328;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar5 = FUN_01e79184();
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar8);
    lVar8 = *(long *)puVar2;
  }
  uVar6 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
                    (uVar5,**(undefined8 **)(lVar8 + 0xb8),0);
  if ((uVar6 & 1) == 0) {
    return -0x3ec;
  }
  local_60._0_4_ = 0;
  local_60._4_4_ = 0;
  local_58 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  iVar3 = FUN_01ebc560(&local_60,0);
  if (iVar3 == 0) {
    if (local_60._4_4_ != 0) {
      uVar5 = *(undefined8 *)PTR_DAT_0235f4c8;
      if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
                    /* try { // try from 01e8db68 to 01f8db77 has its CatchHandler @ 01e8db8c */
        thunk_FUN_01022c14();
      }
      uVar5 = FUN_01d5e86c(uVar5,0);
      puVar1 = PTR_DAT_0234c1b8;
                    /* try { // try from 01e8db78 to 01f8dba7 has its CatchHandler @ 01e8dadc */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01e8db68 with catch @ 01e8db8c
                        */
      if (*(int *)(*(long *)PTR_DAT_0234c1b8 + 0xe0) == 0) {
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01e8db2c with catch @ 01e8db90
                        */
        thunk_FUN_01022c14(*(long *)PTR_DAT_0234c1b8);
      }
      iVar4 = thunk_FUN_00ff122c(uVar5,0);
      if (param_1 == 0) {
LAB_01e8dd38:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
                    /* try { // try from 01e8dba8 to 01f8dbbf has its CatchHandler @ 01e8dc18 */
                    /* try { // try from 01e8dbc0 to 01f8dc07 has its CatchHandler @ 01e8dadc */
      local_58 = (**(code **)(param_1 + 0x18))
                           (*(undefined8 *)(param_1 + 0x40),local_60._4_4_ * iVar4,local_60._4_4_,
                            *(undefined8 *)(param_1 + 0x28));
      local_60._0_4_ = local_60._4_4_;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      iVar3 = FUN_01ebc560(&local_60,0);
      if (iVar3 != 0) {
                    /* try { // try from 01e8dc08 to 01f8dc17 has its CatchHandler @ 01e8dc18 */
        local_78 = *(undefined8 *)PTR_DAT_0235c630;
        uStack_70 = 0xffffffffffffffff;
        local_68 = iVar3;
                    /* catch() { ... } // from try @ 01e8dba8 with catch @ 01e8dc18
                       catch() { ... } // from try @ 01e8dc08 with catch @ 01e8dc18 */
        uVar5 = FUN_01d7bfd8(&local_78,0);
        puVar9 = (undefined8 *)PTR_DAT_0235f4d8;
                    /* try { // try from 01e8dc1c to 01f8dc1f has its CatchHandler @ 01e8dc28 */
                    /* try { // try from 01e8dc20 to 01f8dc2b has its CatchHandler @ 01e8dadc */
        goto LAB_01e8dad8;
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01e8dc1c with catch @ 01e8dc28
                        */
      lVar8 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234cba8,1);
      lVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234bad0,1);
      if (local_60._4_4_ != 0) {
        iVar11 = 0;
        iVar3 = 1;
        while( true ) {
          uVar5 = FUN_01d91148(local_58,iVar11,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01022c14(*(long *)puVar1);
          }
          FUN_01cbb3e0(uVar5,lVar8,0,1,0);
          uVar5 = FUN_01d91148(uVar5,4,0);
          System_Threading_Tasks_Task__RecordInternalCancellationRequest(uVar5,lVar7,0,1,0);
          if (lVar8 == 0) break;
          if (*(int *)(lVar8 + 0x18) == 0) {
LAB_01e8dd3c:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(lVar8 + 0x20));
          if (lVar7 == 0) break;
          if (*(int *)(lVar7 + 0x18) == 0) goto LAB_01e8dd3c;
          local_48 = CONCAT44(*(undefined4 *)(lVar7 + 0x20),*(undefined4 *)(lVar8 + 0x20));
          if (param_2 == 0) break;
          (**(code **)(param_2 + 0x18))
                    (*(undefined8 *)(param_2 + 0x40),&local_48,*(undefined8 *)(param_2 + 0x28));
          lVar10 = (long)iVar3;
          iVar3 = iVar3 + 1;
          iVar11 = iVar11 + iVar4;
          if ((long)(ulong)local_60._4_4_ <= lVar10) {
            return 0;
          }
        }
        goto LAB_01e8dd38;
      }
    }
    iVar3 = 0;
  }
  else {
    local_78 = *(undefined8 *)PTR_DAT_0235c630;
    uStack_70 = 0xffffffffffffffff;
    local_68 = iVar3;
    uVar5 = FUN_01d7bfd8(&local_78,0);
    puVar9 = (undefined8 *)PTR_DAT_0235f4d0;
LAB_01e8dad8:
                    /* try { // try from 01e8dadc to 01f8db2b has its CatchHandler @ 01e8dadc
                       catch() { ... } // from try @ 01e8dadc with catch @ 01e8dadc
                       catch() { ... } // from try @ 01e8db78 with catch @ 01e8dadc
                       catch() { ... } // from try @ 01e8dbc0 with catch @ 01e8dadc
                       catch() { ... } // from try @ 01e8dc20 with catch @ 01e8dadc */
    uVar5 = FUN_01c45a74(*puVar9,uVar5,0);
    if (*(int *)(*(long *)PTR_DAT_0234ba20 + 0xe0) == 0) {
      thunk_FUN_01022c14(*(long *)PTR_DAT_0234ba20);
    }
    FUN_01fd09b0(uVar5,0);
  }
                    /* try { // try from 01e8db2c to 01f8db53 has its CatchHandler @ 01e8db90 */
  return iVar3;
}


