/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryComplete
ENTRY_POINT: 05651064
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_possible_biometrics_hits_1
*/


void OVRManager__add_SpaceQueryComplete
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               long *param_5,long *param_6,long *param_7,long *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint in_w9;
  long *unaff_x20;
  long *unaff_x23;
  long unaff_x28;
  long lVar10;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  
  if ((in_w9 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(System_Collections_Generic_IEnumerable<ClaimsIdentity>_TypeInfo);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<string,_XmlSqlBinaryReader_NamespaceDecl>_TypeInfo
                );
    FUN_02d965b8(Unity_XR_CoreUtils_Collections_HashSetList<object>_TypeInfo);
    FUN_02d965b8(System_IObserver<InputEventPtr>_TypeInfo);
    *(undefined1 *)(unaff_x28 + 0x339) = 1;
  }
  lVar10 = *unaff_x20;
  uStack0000000000000074 = 0;
  in_stack_00000070 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000060 = 0;
  lVar9 = *(long *)(lVar10 + 0x38);
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (lVar9 == 0) {
    FUN_02dcfd74(lVar10);
    lVar9 = *(long *)(lVar10 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 8);
  if (*(long *)(lVar9 + 0x38) == 0) {
    FUN_02dcfd74(lVar9);
  }
  if ((((int)param_5[1] < 1) || (*param_5 == 0)) ||
     (lVar9 = FUN_036eca00(*param_5,param_5[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x28)),
     lVar9 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_036ec914(*param_5,param_5[1],*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x18));
    uVar3 = FUN_055339f0(uVar3,0);
  }
  lVar10 = *unaff_x20;
  lVar9 = *(long *)(lVar10 + 0x38);
  if (lVar9 == 0) {
    FUN_02dcfd74(lVar10);
    lVar9 = *(long *)(lVar10 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 8);
  if (*(long *)(lVar9 + 0x38) == 0) {
    FUN_02dcfd74(lVar9);
  }
  if ((((int)param_6[1] < 1) || (*param_6 == 0)) ||
     (lVar9 = FUN_036eca00(*param_6,param_6[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x28)),
     lVar9 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_036ec914(*param_6,param_6[1],*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x18));
    uVar4 = FUN_055339f0(uVar4,0);
  }
  lVar10 = *unaff_x20;
  lVar9 = *(long *)(lVar10 + 0x38);
  if (lVar9 == 0) {
    FUN_02dcfd74(lVar10);
    lVar9 = *(long *)(lVar10 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 8);
  if (*(long *)(lVar9 + 0x38) == 0) {
    FUN_02dcfd74(lVar9);
  }
  puVar1 = System_Collections_Generic_Dictionary<string,_XmlSqlBinaryReader_NamespaceDecl>_TypeInfo;
  if ((((int)param_7[1] < 1) || (*param_7 == 0)) ||
     (lVar9 = FUN_036eca00(*param_7,param_7[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x28)),
     lVar9 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_036ec914(*param_7,param_7[1],*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x18));
    uVar5 = FUN_055339f0(uVar5,0);
  }
  lVar10 = *(long *)puVar1;
  lVar9 = *(long *)(lVar10 + 0x38);
  if (lVar9 == 0) {
    FUN_02dcfd74(lVar10);
    lVar9 = *(long *)(lVar10 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 8);
  if (*(long *)(lVar9 + 0x38) == 0) {
    FUN_02dcfd74(lVar9);
  }
  puVar1 = Unity_XR_CoreUtils_Collections_HashSetList<object>_TypeInfo;
  if ((((int)param_8[1] < 1) || (*param_8 == 0)) ||
     (lVar9 = FUN_036eca18(*param_8,param_8[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x28)),
     lVar9 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_036ec930(*param_8,param_8[1],*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x18));
  }
  lVar10 = *(long *)puVar1;
  lVar9 = *(long *)(lVar10 + 0x38);
  if (lVar9 == 0) {
    FUN_02dcfd74(lVar10);
    lVar9 = *(long *)(lVar10 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 8);
  if (*(long *)(lVar9 + 0x38) == 0) {
    FUN_02dcfd74(lVar9);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if ((((int)unaff_x23[1] < 1) || (*unaff_x23 == 0)) ||
     (lVar9 = FUN_036eca1c(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x28)),
     lVar9 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_036ec938(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar10 + 0x38) + 0x18));
  }
  puVar2 = System_IObserver<InputEventPtr>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_056513dc(param_2,param_3,in_stack_00000018._4_4_,uVar3,uVar4,uVar5,uVar6,uVar7);
  uVar8 = FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
  if ((uVar8 & 1) == 0) {
    *(undefined8 *)((long)param_1 + 0x54) = 0;
    *(undefined8 *)((long)param_1 + 0x4c) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    memcpy(param_1,&stack0x00000020,0x5c);
  }
  return;
}


