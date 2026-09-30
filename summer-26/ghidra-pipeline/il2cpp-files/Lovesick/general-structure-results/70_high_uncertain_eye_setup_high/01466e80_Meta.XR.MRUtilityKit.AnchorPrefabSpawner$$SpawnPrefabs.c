/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$SpawnPrefabs
ENTRY_POINT: 01466e80
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;weak_pose_support
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;weak_vector_component_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__SpawnPrefabs(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  char cVar6;
  long lVar7;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  float fVar8;
  float __y;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  int iVar12;
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
  
  do {
    if (unaff_x23 != (long *)0x0) {
      lVar7 = *unaff_x23;
      bVar1 = *(byte *)(*(long *)PTR_DAT_033f17f8 + 300);
      if ((*(byte *)(lVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_033f17f8)) {
        bVar1 = *(byte *)(*unaff_x27 + 300);
        if ((*(byte *)(lVar7 + 300) < bVar1) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27))
        goto LAB_01466e24;
      }
      FUN_02667cd8(&stack0x00000038,unaff_x23,0);
      in_stack_00000058 = in_stack_00000040;
      in_stack_00000050 = in_stack_00000038;
      in_stack_00000060 = in_stack_00000048;
      FUN_02687a80(&stack0x00000050,0);
      fVar10 = fStack000000000000001c;
      fVar11 = fStack0000000000000018;
      fVar8 = (float)FUN_02699088(in_stack_00000020,0);
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
      fVar10 = SQRT(fVar11 * fVar11 + fVar8 * fVar8 + fVar10 * fVar10);
      if (fVar10 <= unaff_s15) {
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
        fVar10 = (*(float **)
                   (*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8))[2];
      }
      else {
        __y = fVar8 / fVar10;
        fVar10 = fVar11 / fVar10;
      }
      if ((unaff_s8 <= ABS(__y)) || (fVar9 = 0.0, unaff_s8 <= ABS(fVar10))) {
        fVar9 = atan2f(__y,fVar10);
        fVar9 = fVar9 * in_stack_00000010._4_4_;
        if (fVar9 < 0.0) {
          fVar9 = fVar9 + 360.0;
        }
      }
      iVar12 = *(int *)(unaff_x20 + 0x2c);
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
      fVar10 = (fVar9 / 360.0) * (float)iVar12;
      iStack000000000000006c = -0x80000000;
      if ((float)(int)fVar10 != INFINITY) {
        iStack000000000000006c = (int)fVar10;
      }
      fVar10 = *(float *)(unaff_x20 + 0x3c);
      if (cVar6 == '\0') {
        thunk_FUN_00d48444();
        DAT_03775509 = '\x01';
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar10 = SQRT(fVar8 * fVar8 + fVar11 * fVar11) / fVar10;
      iStack0000000000000068 = -0x80000000;
      if ((float)(int)fVar10 != INFINITY) {
        iStack0000000000000068 = (int)fVar10;
      }
      if ((iStack0000000000000068 == 0) && (*(char *)(unaff_x20 + 0x40) != '\0')) {
        iStack000000000000006c = 0;
      }
      uVar2 = FUN_0176eb1c((long)&stack0x00000068 + 4,0);
      uVar3 = FUN_0176eb1c(&stack0x00000068,0);
      FUN_0160073c(*(undefined8 *)StringLiteral_6525,uVar2,*(undefined8 *)StringLiteral_6124,uVar3,0
                  );
      uVar4 = FUN_0129aa60();
      if ((uVar4 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                             Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo)
        ;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01320e50(plVar5,*(undefined8 *)
                             Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
                    );
        FUN_0129a054();
      }
      else {
        FUN_01299bc0();
        plVar5 = in_stack_00000038;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar4 = FUN_01322618(plVar5,unaff_x23,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_InputControlPath_TryGetDeviceLayout__);
      if ((uVar4 & 1) == 0) {
        FUN_00ad61c4(plVar5,unaff_x23,
                     *(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__);
      }
    }
LAB_01466e24:
    do {
      uVar4 = FUN_012b894c(&stack0x00000070,*unaff_x29);
      if ((uVar4 & 1) == 0) {
        FUN_012b8948(&stack0x00000070,
                     *(undefined8 *)
                      Field_<PrivateImplementationDetails>_A199F717FBA4D1378A33D65E9660E45ADC176876A3450BACF2A80DA985FBDF14
                    );
        return;
      }
      lVar7 = FUN_00ac2bf8(&stack0x00000070,*unaff_x26);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_0268b4e0(lVar7,0,0);
    } while ((uVar4 & 1) != 0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_010e58e8(lVar7,&stack0x00000038,*unaff_x22);
    unaff_x23 = in_stack_00000038;
  } while( true );
}


