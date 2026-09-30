/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRawPose
ENTRY_POINT: 01d7e190
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackingTransformRawPose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar8;
  undefined4 uStack000000000000001c;
  
  FUN_00fdc2e4();
  FUN_00fdc2e4(PTR_DAT_0234bda8);
  FUN_00fdc2e4(PTR_DAT_0234bc58);
  FUN_00fdc2e4(PTR_DAT_02358f68);
  FUN_00fdc2e4(PTR_DAT_02358f70);
  FUN_00fdc2e4(PTR_DAT_02358f78);
  FUN_00fdc2e4(PTR_DAT_02358f80);
  FUN_00fdc2e4(PTR_DAT_02358f88);
  FUN_00fdc2e4(PTR_DAT_02353e48);
  FUN_00fdc2e4(PTR_DAT_02358f90);
  FUN_00fdc2e4(PTR_DAT_02358f98);
  FUN_00fdc2e4(PTR_DAT_02358fa0);
  FUN_00fdc2e4(PTR_DAT_0234d1b8);
  FUN_00fdc2e4(PTR_DAT_02358fa8);
  FUN_00fdc2e4(PTR_DAT_02358fe0);
  *(undefined1 *)(unaff_x19 + 0x7c4) = 1;
  if (unaff_x21 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar8 = thunk_FUN_010400dc();
    uVar7 = thunk_FUN_010303a8(PTR_DAT_0234d108);
    FUN_01c5e120(uVar8,uVar7,0);
    uVar7 = thunk_FUN_010303a8(PTR_DAT_02358fe8);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar8,uVar7);
  }
                    /* catch() { ... } // from try @ 01d7e2e8 with catch @ 01d7e24c
                       catch() { ... } // from try @ 01d7e318 with catch @ 01d7e24c
                       catch() { ... } // from try @ 01d7e324 with catch @ 01d7e24c
                       catch() { ... } // from try @ 01d7e378 with catch @ 01d7e24c */
  if ((unaff_x22[8] == 0) && (unaff_x22[7] != 0)) {
                    /* try { // try from 01d7e264 to 01e7e26f has its CatchHandler @ 01d7e328 */
    FUN_01d7dcac();
  }
  puVar2 = PTR_DAT_0234bda8;
  puVar1 = PTR_DAT_0234bc58;
  if (unaff_x22[0xd] == 0) {
                    /* try { // try from 01d7e288 to 01e7e28f has its CatchHandler @ 01d7e338 */
    lVar5 = (**(code **)(*unaff_x22 + 0x1c8))();
    unaff_x22[0xd] = lVar5;
    thunk_FUN_0106e12c(unaff_x22 + 0xd,lVar5);
  }
  puVar4 = PTR_DAT_02358f60;
  puVar3 = PTR_DAT_023520f0;
                    /* try { // try from 01d7e2ac to 01e7e2b3 has its CatchHandler @ 01d7e330 */
  FUN_01d7db88();
  uVar8 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14(*(long *)puVar1);
  }
  FUN_01d5e86c(uVar8,0);
  FUN_01c9fb7c();
  FUN_01d5e86c(*(undefined8 *)puVar2,0);
  FUN_01c9fb7c();
  FUN_01d5e86c(*(undefined8 *)puVar3,0);
  FUN_01c9fb7c();
  FUN_01d5e86c(*(undefined8 *)puVar4,0);
  FUN_01c9fb7c();
  FUN_01d5e86c(*(undefined8 *)puVar2,0);
  FUN_01c9fb7c();
  FUN_01d5e86c(*(undefined8 *)puVar2,0);
  FUN_01c9fb7c();
  FUN_01d5e86c(*(undefined8 *)puVar2,0);
  FUN_01c9fb7c();
  uStack000000000000001c = (undefined4)unaff_x22[10];
  thunk_FUN_0103fd0c(*(undefined8 *)PTR_DAT_0234bb30,&stack0x0000001c);
  FUN_01d5e86c(*(undefined8 *)PTR_DAT_0234bd70,0);
  FUN_01c9fb7c();
  FUN_01ca0f60();
  FUN_01ca1298();
  FUN_01d5e86c(*(undefined8 *)puVar2,0);
  FUN_01c9fb7c();
  if ((unaff_x22[0xe] != 0) && (uVar6 = FUN_01c9f9e4(unaff_x22[0xe],0), (uVar6 & 1) != 0)) {
    uVar8 = *(undefined8 *)PTR_DAT_02352ac8;
    if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01d5e86c(uVar8,0);
    FUN_01c9fb7c();
    if (unaff_x22[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    System_WeakReference__GetObjectData();
  }
  return;
}


