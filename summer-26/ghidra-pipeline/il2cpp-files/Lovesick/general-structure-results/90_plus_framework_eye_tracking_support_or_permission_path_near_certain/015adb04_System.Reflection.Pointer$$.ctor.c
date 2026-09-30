/*
FUNCTION_NAME: System.Reflection.Pointer$$.ctor
ENTRY_POINT: 015adb04
PROGRAM: Lovesick-libil2cpp.so
SCORE: 98
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Reflection_Pointer___ctor(undefined1 param_1 [16],ulong param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonWriter_<WriteConstructorDateAsync>d__32>__
                    );
  thunk_FUN_00d48444(
                    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                    );
  thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_5473);
  thunk_FUN_00d48444(StringLiteral_11796);
  thunk_FUN_00d48444(PTR_DAT_033f4100);
  thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  thunk_FUN_00d48444(PTR_DAT_033f5be0);
  *(undefined1 *)(unaff_x21 + 0xdbb) = 1;
  puVar1 = PTR_DAT_033f4100;
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = FUN_0112e800(*(undefined8 *)puVar1);
  uVar8 = FUN_0268b4e0(lVar7,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11796);
  puVar1 = StringLiteral_5473;
  if (lVar9 != 0) {
    FUN_01320e50(lVar9,*(undefined8 *)UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar5 = Method_System_Numerics_Vector<ushort>_get_Zero__;
    puVar4 = 
    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__;
    puVar3 = Method_System_ReadOnlySpan<byte>_GetPinnableReference__;
    puVar2 = OVREyeGaze_TypeInfo;
    puVar1 = PTR_DAT_033f5be0;
    if (lVar10 != 0) {
      FUN_01320e50(lVar10,*(undefined8 *)Method_Sirenix_Serialization_Serializer<bool>__ctor__);
      iVar12 = 0;
      do {
        fVar14 = (float)param_2;
        lVar11 = *(long *)puVar1;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar11 = *(long *)puVar1;
        }
        fVar19 = *(float *)(unaff_x20 + 0x2c);
        fVar18 = **(float **)(lVar11 + 0xb8);
        fVar13 = (float)FUN_026f10b4(unaff_x24 + 0x18,0);
        if (lVar7 == 0) goto LAB_015adeac;
        fVar18 = ((fVar18 + fVar18) / 12.0) * (float)iVar12;
        sincosf(fVar18,(float *)((long)&stack0x00000028 + 4),&stack0x00000028);
        param_2 = (ulong)(uint)(fVar14 + 0.0);
        param_3 = param_3 + fVar19 * fStack000000000000002c;
        FUN_015a29b0(fVar13 + fVar19 * fStack0000000000000028,param_2,param_3,lVar7,1,0);
        FUN_00ad3d7c(lVar9,*(undefined8 *)puVar3);
        FUN_00ac1d04(fVar18,lVar10,*(undefined8 *)puVar5);
        iVar12 = iVar12 + 1;
      } while (iVar12 != 0xc);
      fVar19 = *(float *)(unaff_x20 + 0x1c);
      fVar15 = *(float *)(unaff_x20 + 0x20);
      fVar16 = *(float *)(unaff_x20 + 0x24);
      FUN_0132138c(lVar9,0,&stack0x00000010,*(undefined8 *)puVar4);
      fVar18 = in_stack_00000018;
      fVar13 = fStack0000000000000014;
      fVar14 = fStack0000000000000010;
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5473);
      if (lVar7 != 0) {
        FUN_01320e50(lVar7,*(undefined8 *)Method_Sirenix_Serialization_Serializer<bool>__ctor__);
        FUN_0132138c(lVar10,0,&stack0x00000010,*(undefined8 *)puVar2);
        FUN_00ac1d04(fStack0000000000000010,lVar7,*(undefined8 *)puVar5);
        if (0 < *(int *)(lVar9 + 0x18)) {
          fVar19 = fVar19 - fVar14;
          fVar15 = fVar15 - fVar13;
          fVar16 = fVar16 - fVar18;
          iVar12 = 0;
          fVar14 = SQRT(fVar16 * fVar16 + fVar19 * fVar19 + fVar15 * fVar15);
          do {
            fVar13 = *(float *)(unaff_x20 + 0x1c);
            uVar17 = *(undefined8 *)(unaff_x20 + 0x20);
            FUN_0132138c(lVar9,iVar12,&stack0x00000010,*(undefined8 *)puVar4);
            fVar13 = fVar13 - fStack0000000000000010;
            fVar18 = (float)uVar17 - fStack0000000000000014;
            fVar19 = (float)((ulong)uVar17 >> 0x20) - in_stack_00000018;
            fVar13 = SQRT(fVar19 * fVar19 + fVar13 * fVar13 + fVar18 * fVar18);
            if (fVar13 <= fVar14) {
              FUN_0132138c(lVar10,iVar12,&stack0x00000010,*(undefined8 *)puVar2);
              FUN_00ac1d04(fStack0000000000000010,lVar7,*(undefined8 *)puVar5);
              fVar14 = fVar13;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(lVar9 + 0x18));
        }
        uVar6 = FUN_02682b20(0,*(undefined4 *)(lVar7 + 0x18),0);
        if (unaff_x22 != 0) {
          lVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (unaff_x22,0);
          FUN_0132138c(lVar7,uVar6,&stack0x00000010,*(undefined8 *)puVar2);
          FUN_02698b6c(0,fStack0000000000000010 * DAT_0294140c * DAT_028aa044,0,0);
          if (lVar9 != 0) {
            FUN_0269f894(lVar9,0);
            return;
          }
        }
      }
    }
  }
LAB_015adeac:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


