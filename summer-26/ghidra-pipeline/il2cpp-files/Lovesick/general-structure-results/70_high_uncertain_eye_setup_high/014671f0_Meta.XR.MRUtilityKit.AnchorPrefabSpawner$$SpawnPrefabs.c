/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$SpawnPrefabs
ENTRY_POINT: 014671f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;weak_pose_support
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;weak_vector_component_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__SpawnPrefabs(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  char cVar6;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  float fVar7;
  float __y;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  int iVar11;
  float unaff_s15;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined4 in_stack_00000020;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  int iStack0000000000000068;
  int iStack000000000000006c;
  
code_r0x014671f0:
  FUN_0129a054();
  do {
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = FUN_01322618(unaff_x24,unaff_x23,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputControlPath_TryGetDeviceLayout__);
    if ((uVar5 & 1) == 0) {
      FUN_00ad61c4(unaff_x24,unaff_x23,
                   *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__);
    }
    do {
      do {
        do {
          uVar5 = FUN_012b894c(&stack0x00000070,*unaff_x29);
          if ((uVar5 & 1) == 0) {
            FUN_012b8948(&stack0x00000070,
                         *(undefined8 *)
                          Field_<PrivateImplementationDetails>_A199F717FBA4D1378A33D65E9660E45ADC176876A3450BACF2A80DA985FBDF14
                        );
            return;
          }
          lVar2 = FUN_00ac2bf8(&stack0x00000070,*unaff_x26);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar5 = FUN_0268b4e0(lVar2,0,0);
        } while ((uVar5 & 1) != 0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_010e58e8(lVar2,&stack0x00000038,*unaff_x22);
        unaff_x23 = in_stack_00000038;
      } while (in_stack_00000038 == (long *)0x0);
      lVar2 = *in_stack_00000038;
      bVar1 = *(byte *)(*(long *)PTR_DAT_033f17f8 + 300);
      if ((bVar1 <= *(byte *)(lVar2 + 300)) &&
         (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_033f17f8))
      break;
      bVar1 = *(byte *)(*unaff_x27 + 300);
    } while ((*(byte *)(lVar2 + 300) < bVar1) ||
            (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27));
    FUN_02667cd8(&stack0x00000038,in_stack_00000038,0);
    in_stack_00000058 = in_stack_00000040;
    in_stack_00000050 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000048;
    FUN_02687a80(&stack0x00000050,0);
    fVar9 = fStack000000000000001c;
    fVar10 = fStack0000000000000018;
    fVar7 = (float)FUN_02699088(in_stack_00000020,0);
    if (DAT_03775439 == '\0') {
      thunk_FUN_00d48444();
      DAT_03775439 = '\x01';
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377518c == '\0') {
      thunk_FUN_00d48444();
      DAT_0377518c = '\x01';
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar9 = SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar9 * fVar9);
    if (fVar9 <= unaff_s15) {
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      __y = **(float **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8);
      fVar9 = (*(float **)
                (*(long *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                0xb8))[2];
    }
    else {
      __y = fVar7 / fVar9;
      fVar9 = fVar10 / fVar9;
    }
    if ((unaff_s8 <= ABS(__y)) || (fVar8 = 0.0, unaff_s8 <= ABS(fVar9))) {
      fVar8 = atan2f(__y,fVar9);
      fVar8 = fVar8 * in_stack_00000010._4_4_;
      if (fVar8 < 0.0) {
        fVar8 = fVar8 + 360.0;
      }
    }
    iVar11 = *(int *)(unaff_x20 + 0x2c);
    if (DAT_03775509 == '\0') {
      thunk_FUN_00d48444();
      DAT_03775509 = '\x01';
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      cVar6 = DAT_03775509;
    }
    else {
      cVar6 = '\x01';
    }
    fVar9 = (fVar8 / 360.0) * (float)iVar11;
    iStack000000000000006c = -0x80000000;
    if ((float)(int)fVar9 != INFINITY) {
      iStack000000000000006c = (int)fVar9;
    }
    fVar9 = *(float *)(unaff_x20 + 0x3c);
    if (cVar6 == '\0') {
      thunk_FUN_00d48444();
      DAT_03775509 = '\x01';
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar9 = SQRT(fVar7 * fVar7 + fVar10 * fVar10) / fVar9;
    iStack0000000000000068 = -0x80000000;
    if ((float)(int)fVar9 != INFINITY) {
      iStack0000000000000068 = (int)fVar9;
    }
    if ((iStack0000000000000068 == 0) && (*(char *)(unaff_x20 + 0x40) != '\0')) {
      iStack000000000000006c = 0;
    }
    uVar3 = FUN_0176eb1c((long)&stack0x00000068 + 4,0);
    uVar4 = FUN_0176eb1c(&stack0x00000068,0);
    FUN_0160073c(*(undefined8 *)StringLiteral_6525,uVar3,*(undefined8 *)StringLiteral_6124,uVar4,0);
    uVar5 = FUN_0129aa60();
    if ((uVar5 & 1) == 0) break;
    FUN_01299bc0();
    unaff_x24 = in_stack_00000038;
  } while( true );
  unaff_x24 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                          Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo);
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01320e50(unaff_x24,
               *(undefined8 *)
                Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
              );
  goto code_r0x014671f0;
}


