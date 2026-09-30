/*
FUNCTION_NAME: FUN_0663da18
ENTRY_POINT: 0663da18
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_0663da18(long param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined8 uVar15;
  
  if ((DAT_06dce70e & 1) == 0) {
                    /* try { // try from 0663da4c to 0673dbaf has its CatchHandler @ 0663da4c
                       catch() { ... } // from try @ 0663da4c with catch @ 0663da4c
                       catch() { ... } // from try @ 0663dc84 with catch @ 0663da4c
                       catch() { ... } // from try @ 0663de4c with catch @ 0663da4c
                       catch() { ... } // from try @ 0663dea8 with catch @ 0663da4c */
    FUN_02d965b8(System_Runtime_Remoting_Messaging_ConstructionCall_TypeInfo);
    FUN_02d965b8(System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo);
    FUN_02d965b8(System_Net_ContentDecodeStream_TypeInfo);
    FUN_02d965b8(System_Net_Http_Headers_ContentDispositionHeaderValue_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a01128);
    FUN_02d965b8(PTR_DAT_069fb990);
    DAT_06dce70e = 1;
  }
  cVar5 = DAT_06db4c79;
  if ((param_2 == 0) || (lVar11 = *(long *)(param_2 + 0x18), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar10 = *(uint *)(param_2 + 0x10);
  uVar12 = *(undefined8 *)(lVar11 + 0x50);
  if ((uVar10 & 0xfffffffd) == 0) {
    *(undefined1 *)(lVar11 + 0xf8) = 1;
    if (cVar5 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbf00);
      DAT_06db4c79 = '\x01';
    }
    uVar15 = **(undefined8 **)(*(long *)PTR_DAT_069fbf00 + 0xb8);
    *(undefined2 *)(lVar11 + 0x144) = 1;
    *(undefined8 *)(lVar11 + 0x114) = *(undefined8 *)(lVar11 + 0x104);
    *(undefined8 *)(lVar11 + 0x10c) = uVar15;
    memcpy((void *)(lVar11 + 0xa0),(undefined8 *)(lVar11 + 0x50),0x50);
    LeanTween__value(lVar11 + 0xa0,0);
    FUN_0663b888(param_1,uVar12,lVar11);
    fVar14 = (float)FUN_06359eb0(0);
    fVar2 = DAT_010fd080;
    if (DAT_010fd080 <= fVar14 - *(float *)(lVar11 + 0x134)) {
      *(undefined4 *)(lVar11 + 0x138) = 0;
    }
    puVar4 = PTR_DAT_06a01128;
    if (*(int *)(*(long *)PTR_DAT_06a01128 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dbee18 == '\0') {
      FUN_02d965b8(PTR_DAT_06a01128);
      DAT_06dbee18 = '\x01';
    }
    lVar6 = *(long *)puVar4;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar6 = *(long *)puVar4;
    }
                    /* try { // try from 0663dbb0 to 0673dbd7 has its CatchHandler @ 0663de70 */
    uVar15 = FUN_0362ed24(uVar12,lVar11,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),
                          *(undefined8 *)System_Runtime_Remoting_Messaging_ConstructionCall_TypeInfo
                         );
    uVar7 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                      (uVar12,*(undefined8 *)
                               System_Net_Http_Headers_ContentDispositionHeaderValue_TypeInfo);
    puVar3 = PTR_DAT_069fb990;
    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
    }
    uVar8 = FUN_06350670(uVar15,0,0);
    uVar1 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar1 = uVar15;
    }
    fVar14 = (float)FUN_06359eb0(0);
                    /* try { // try from 0663dc14 to 0673dc3b has its CatchHandler @ 0663de6c */
    uVar15 = *(undefined8 *)(lVar11 + 0x30);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar8 = FUN_06350670(uVar1,uVar15,0);
    if ((uVar8 & 1) == 0) {
      *(undefined4 *)(lVar11 + 0x138) = 1;
    }
    else {
                    /* try { // try from 0663dc48 to 0673dc53 has its CatchHandler @ 0663de5c */
      if (fVar2 <= fVar14 - *(float *)(lVar11 + 0x134)) {
        iVar9 = 1;
      }
      else {
        iVar9 = *(int *)(lVar11 + 0x138) + 1;
      }
                    /* try { // try from 0663dc6c to 0673dc77 has its CatchHandler @ 0663de58 */
      *(int *)(lVar11 + 0x138) = iVar9;
      *(float *)(lVar11 + 0x134) = fVar14;
    }
    FUN_0663421c(lVar11,uVar1);
                    /* try { // try from 0663dc80 to 0673dc83 has its CatchHandler @ 0663de68 */
                    /* try { // try from 0663dc84 to 0673de43 has its CatchHandler @ 0663da4c */
    *(undefined8 *)(lVar11 + 0x38) = uVar12;
    LeanTween__value((undefined8 *)(lVar11 + 0x38),uVar12);
    *(undefined8 *)(lVar11 + 0x48) = uVar7;
    LeanTween__value((undefined8 *)(lVar11 + 0x48),uVar7);
    lVar6 = *(long *)puVar4;
    *(float *)(lVar11 + 0x134) = fVar14;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar15 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                       (uVar12,*(undefined8 *)System_Net_ContentDecodeStream_TypeInfo);
    puVar13 = (undefined8 *)(lVar11 + 0x40);
    *puVar13 = uVar15;
    LeanTween__value(puVar13,uVar15);
    uVar15 = *puVar13;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar8 = FUN_0634eb94(uVar15,0,0);
    if ((uVar8 & 1) != 0) {
      uVar15 = *puVar13;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dbee19 == '\0') {
        FUN_02d965b8(PTR_DAT_06a01128);
        DAT_06dbee19 = '\x01';
      }
      lVar6 = *(long *)puVar4;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar6 = *(long *)puVar4;
      }
      FUN_0362e420(uVar15,lVar11,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x30),
                   *(undefined8 *)
                    System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo);
    }
    *(long *)(param_1 + 0x90) = lVar11;
    LeanTween__value((long *)(param_1 + 0x90),lVar11);
    uVar10 = *(uint *)(param_2 + 0x10);
  }
  if (uVar10 - 1 < 2) {
    FUN_0663c084(param_1,lVar11,uVar12);
    return;
  }
  return;
}


