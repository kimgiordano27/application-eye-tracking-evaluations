/*
FUNCTION_NAME: OVRManager$$.cctor
ENTRY_POINT: 0313f7b8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager___cctor(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  
  if ((DAT_03ff1f1d & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d7fa18);
    thunk_FUN_01ad9084(PTR_DAT_03d7fa20);
    thunk_FUN_01ad9084(PTR_DAT_03d7fa28);
    thunk_FUN_01ad9084(PTR_DAT_03d7fa30);
    thunk_FUN_01ad9084(PTR_DAT_03d7fa00);
    thunk_FUN_01ad9084(PTR_DAT_03d7f990);
    DAT_03ff1f1d = 1;
  }
  _fStack0000000000000090 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  _fStack0000000000000088 = 0;
  _fStack0000000000000080 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
  }
  puVar3 = PTR_DAT_03d7f990;
  puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  if (*(long *)(param_2 + 0x130) != 0) {
    pfVar7 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    fVar11 = *pfVar7;
    fVar10 = pfVar7[1];
    fVar9 = pfVar7[2];
    if (*(int *)(*(long *)(param_2 + 0x130) + 0x18) == 0) {
      uVar6 = *(undefined8 *)PTR_DAT_03d7f990;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      fVar13 = fVar10;
      fStack0000000000000014 = fVar11;
      fStack000000000000001c = fVar9;
    }
    else {
      uVar4 = FUN_0313fe14(param_2);
      if ((uVar4 & 1) == 0) {
        FUN_03140420(&stack0x00000008,param_2);
        fVar11 = fStack0000000000000008;
        fVar9 = fStack0000000000000010;
        fVar13 = fStack0000000000000018;
      }
      else {
        FUN_0313ffd4(param_2);
        lVar5 = *(long *)(param_2 + 0x140);
        if (lVar5 == 0) goto LAB_0313fa1c;
        iVar1 = *(int *)(lVar5 + 0x18);
        if (iVar1 == 0) {
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          uVar6 = *(undefined8 *)puVar3;
          pfVar7 = *(float **)(*(long *)puVar2 + 0xb8);
          fVar11 = *pfVar7;
          fVar10 = pfVar7[1];
          fVar9 = pfVar7[2];
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          fVar13 = fVar10;
          fStack0000000000000014 = fVar11;
          fStack000000000000001c = fVar9;
          goto LAB_0313f9a8;
        }
        FUN_02c4432c(&stack0x00000008,lVar5,*(undefined8 *)PTR_DAT_03d7fa30);
        memcpy(&stack0x00000050,&stack0x00000008,0x48);
        puVar2 = PTR_DAT_03d7fa20;
        fVar13 = fVar10;
        fVar14 = fVar11;
        fVar12 = fVar9;
        while( true ) {
          uVar4 = FUN_02755d30(&stack0x00000050,*(undefined8 *)puVar2);
          if ((uVar4 & 1) == 0) break;
          fVar14 = fVar14 + in_stack_00000078._4_4_;
          fVar13 = fVar13 + fStack0000000000000080;
          fVar12 = fVar12 + fStack0000000000000084;
          fVar11 = fVar11 + fStack0000000000000088;
          fVar10 = fVar10 + fStack000000000000008c;
          fVar9 = fVar9 + fStack0000000000000090;
        }
        FUN_02755d2c(&stack0x00000050,*(undefined8 *)PTR_DAT_03d7fa18);
        fVar8 = (float)iVar1;
        fStack000000000000000c = fVar13 / fVar8;
        fStack0000000000000014 = fVar11 / fVar8;
        fStack000000000000001c = fVar9 / fVar8;
        fVar11 = fVar14 / fVar8;
        fVar9 = fVar12 / fVar8;
        fVar13 = fVar10 / fVar8;
      }
      uVar6 = *(undefined8 *)puVar3;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      fVar10 = fStack000000000000000c;
    }
LAB_0313f9a8:
    FUN_02279978(fVar11,fVar10,fVar9,fStack0000000000000014,fVar13,fStack000000000000001c,param_1,
                 uVar6);
    return;
  }
LAB_0313fa1c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


