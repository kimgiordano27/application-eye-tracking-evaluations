/*
FUNCTION_NAME: Unity.Services.Qos.V2.ErrorMitigation.StatusCodePolicyConfig$$HandleStatusCode
ENTRY_POINT: 078434dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Unity_Services_Qos_V2_ErrorMitigation_StatusCodePolicyConfig__HandleStatusCode
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  FUN_05f9f7c4(param_2,*param_1);
                    /* try { // try from 078434e8 to 0794351f has its CatchHandler @ 07843eb4 */
  uVar10 = *(undefined8 *)
            System_Func<KeyValuePair<Type,_PostProcessBundle>,_PostProcessBundle>_TypeInfo;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0675ff58(uVar10,0);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* try { // try from 07843530 to 07943533 has its CatchHandler @ 07843e34 */
  FUN_05fa0540();
                    /* try { // try from 0784354c to 0794354f has its CatchHandler @ 07843ec0 */
  FUN_0675ff58(*(undefined8 *)UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo,0)
  ;
                    /* try { // try from 07843568 to 07943587 has its CatchHandler @ 07843e54 */
  FUN_05fa0540();
  puVar1 = UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudSimpleMode>_TypeInfo;
  FUN_0675ff58(*(undefined8 *)
                UnityEngine_Rendering_EnumParameter<VolumetricClouds_CloudSimpleMode>_TypeInfo,0);
                    /* try { // try from 07843594 to 0794359b has its CatchHandler @ 07843e30 */
  FUN_05fa0540();
  FUN_0675ff58(*(undefined8 *)puVar1,0);
  FUN_05fa0540();
  FUN_0675ff58(*(undefined8 *)puVar1,0);
                    /* try { // try from 078435e0 to 0794361b has its CatchHandler @ 07843ec0 */
  FUN_05fa0540();
  FUN_0675ff58(*(undefined8 *)puVar1,0);
  FUN_05fa0540();
                    /* try { // try from 0784361c to 0794371b has its CatchHandler @ 07843170 */
  FUN_0675ff58(*(undefined8 *)puVar1,0);
  FUN_05fa0540();
  FUN_0675ff58(*(undefined8 *)puVar1,0);
  FUN_05fa0540();
  *(long *)(unaff_x19 + 0xe) = unaff_x21;
  thunk_FUN_03afed3c();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 8);
  uVar10 = FUN_078392b4();
  lVar2 = FUN_077e0ec4(uVar8,uVar10,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar9 = *(long **)(unaff_x20 + 0x10);
  uVar10 = FUN_0782a1ec(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar2 + 0x10),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar8 = FUN_0782a200(*(long *)(unaff_x19 + 0xc),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar3 = FUN_0782a208(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x20 + 0x18),lVar2,0);
  uVar5 = 10;
  if ((*(ulong *)(lVar2 + 0x18) & 0xff) != 0) {
    uVar5 = (undefined4)(*(ulong *)(lVar2 + 0x18) >> 0x20);
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0(10);
  }
  lVar2 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  uVar11 = *(undefined8 *)PTR_DAT_084c7fc0;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)System_Func<TextInfo>_TypeInfo) {
        puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_07843778;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)System_Func<TextInfo>_TypeInfo,0);
LAB_07843778:
  lVar2 = (*(code *)*puVar4)(plVar9,uVar11,uVar10,uVar8,uVar3,uVar5,puVar4[1]);
  if (lVar2 != 0) {
    in_stack_00000018 =
         FUN_058b71ec(lVar2,*(undefined8 *)
                             System_IO_Enumeration_FileSystemEnumerable_FindPredicate<DirectoryInfo>_TypeInfo
                     );
    uVar6 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)UnityEngine_TextCore_Text_FastAction<bool>_TypeInfo);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fd9648(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      uVar10 = FUN_0587c704(&stack0x00000018,*(undefined8 *)TMPro_FastAction<Object>_TypeInfo);
      uVar8 = FUN_04718284(uVar10,*(undefined8 *)(unaff_x19 + 0xe),
                           *(undefined8 *)
                            System_Func<KeyValuePair<uint,_NetworkPrefab>,_uint>_TypeInfo);
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Func<List<object>,_List<IDeserializable>>_TypeInfo);
      FUN_0575071c(uVar3,uVar10,uVar8,
                   *(undefined8 *)System_Func<List<object>,_List<IDeserializable>>_TypeInfo);
      puVar1 = System_Runtime_Serialization_DataNode<ulong>_TypeInfo;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar3,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


