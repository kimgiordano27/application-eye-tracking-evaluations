/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$OnDisable
ENTRY_POINT: 014660d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__OnDisable
               (undefined1 param_1 [16],float param_2,float param_3)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar6;
  float fVar7;
  float fVar8;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  float in_stack_00000048;
  long *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  FUN_01323390();
  in_stack_00000058 = in_stack_00000010;
  in_stack_00000050 = in_stack_00000008;
  in_stack_00000060 = in_stack_00000018;
LAB_014660e4:
  do {
    do {
      uVar3 = FUN_012b894c(&stack0x00000050,*unaff_x25);
      if ((uVar3 & 1) == 0) {
        FUN_012b8948(&stack0x00000050,
                     *(undefined8 *)
                      Field_<PrivateImplementationDetails>_A199F717FBA4D1378A33D65E9660E45ADC176876A3450BACF2A80DA985FBDF14
                    );
        return;
      }
      lVar4 = FUN_00ac2bf8(&stack0x00000050,*unaff_x26);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar3 = FUN_0268b4e0(lVar4,0,0);
    } while ((uVar3 & 1) != 0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_010e58e8(lVar4,&stack0x00000008,*unaff_x28);
    plVar2 = in_stack_00000008;
  } while (in_stack_00000008 == (long *)0x0);
  lVar4 = *in_stack_00000008;
  bVar1 = *(byte *)(*unaff_x29 + 300);
  if ((*(byte *)(lVar4 + 300) < bVar1) ||
     (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) goto LAB_01466170;
  goto LAB_01466194;
LAB_01466170:
  bVar1 = *(byte *)(*unaff_x24 + 300);
  if ((bVar1 <= *(byte *)(lVar4 + 300)) &&
     (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x24)) {
LAB_01466194:
    FUN_02667cd8(&stack0x00000008,in_stack_00000008,0);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    fVar6 = (float)FUN_02687a80(&stack0x00000020,0);
    fVar7 = (float)*(undefined8 *)(unaff_x20 + 0x20);
    fVar8 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0x20) >> 0x20);
    in_stack_00000040 =
         CONCAT44(fVar8 * (float)(int)((param_2 -
                                       (float)((ulong)*(undefined8 *)(unaff_x20 + 0x14) >> 0x20)) /
                                      fVar8),
                  fVar7 * (float)(int)((fVar6 - (float)*(undefined8 *)(unaff_x20 + 0x14)) / fVar7));
    param_2 = *(float *)(unaff_x20 + 0x28);
    in_stack_00000048 = param_2 * (float)(int)((param_3 - *(float *)(unaff_x20 + 0x1c)) / param_2);
    FUN_02697160(&stack0x00000040,0);
    uVar3 = FUN_0129aa60();
    if ((uVar3 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                           Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo);
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
      plVar5 = in_stack_00000008;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar3 = FUN_01322618(plVar5,plVar2,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_InputControlPath_TryGetDeviceLayout__);
    if ((uVar3 & 1) == 0) {
      FUN_00ad61c4(plVar5,plVar2,*(undefined8 *)Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__
                  );
    }
  }
  goto LAB_014660e4;
}


