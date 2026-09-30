/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$DestroyColliders
ENTRY_POINT: 0146ff38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01470154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_XR_MRUtilityKit_EffectMesh__DestroyColliders
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  bool in_ZR;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  int in_w8;
  long lVar6;
  int in_w9;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined4 uVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_033f7148;
  if (!in_ZR) {
    in_w9 = 1;
  }
  if (in_w9 != in_w8) {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)puVar1,0);
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar4 = FUN_015fe250();
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(unaff_x19 + 0x70) = 0;
    uVar4 = FUN_0267e21c();
    if ((uVar4 & 1) == 0) {
      *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x19 + 0x7c);
      *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x74);
    }
    else {
      uVar7 = FUN_0267d928();
      *(undefined4 *)(unaff_x19 + 0x20) = uVar7;
      *(undefined4 *)(unaff_x19 + 0x24) = param_2;
      *(undefined4 *)(unaff_x19 + 0x28) = param_3;
      *(undefined4 *)(unaff_x19 + 0x2c) = param_4;
    }
    uVar4 = FUN_0267e21c();
    if (((((uVar4 & 1) != 0) && (uVar4 = FUN_0267e21c(), (uVar4 & 1) != 0)) &&
        (uVar4 = FUN_0267e21c(), (uVar4 & 1) != 0)) &&
       ((fVar8 = (float)FUN_0267f5a0(), fVar8 == 1.0 &&
        (fVar8 = (float)FUN_0267f5a0(), fVar8 == 1.0)))) {
      *(undefined1 *)(unaff_x19 + 0x30) = 1;
      fVar8 = (float)FUN_0267f5a0();
      if (fVar8 < _LAB_028aa024) {
        fVar8 = _LAB_028aa024;
      }
      *(float *)(unaff_x19 + 0x34) = fVar8;
      return;
    }
    *(undefined1 *)(unaff_x19 + 0x30) = 0;
    *(undefined4 *)(unaff_x19 + 0x34) = 0x3f000000;
    return;
  }
  uVar4 = FUN_015fe250();
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_015fe250();
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_015fe250();
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_015fe250();
        if ((uVar4 & 1) == 0) {
          *(undefined4 *)(unaff_x19 + 0x70) = 5;
          return;
        }
        *(undefined4 *)(unaff_x19 + 0x70) = 3;
        bVar3 = FUN_0267e394();
        *(byte *)(unaff_x19 + 0x5c) = bVar3 & 1;
        uVar4 = FUN_0267e21c();
        if ((uVar4 & 1) != 0) {
          uVar7 = FUN_0267d928();
          *(undefined4 *)(unaff_x19 + 0x60) = uVar7;
          *(undefined4 *)(unaff_x19 + 100) = param_2;
          *(undefined4 *)(unaff_x19 + 0x68) = param_3;
          *(undefined4 *)(unaff_x19 + 0x6c) = param_4;
          return;
        }
        *(undefined8 *)(unaff_x19 + 0x7c) = *(undefined8 *)(unaff_x19 + 0xe8);
        *(undefined8 *)(unaff_x19 + 0x74) = *(undefined8 *)(unaff_x19 + 0xe0);
        return;
      }
      *(undefined4 *)(unaff_x19 + 0x70) = 4;
      uVar4 = FUN_0267e21c();
      if ((uVar4 & 1) == 0) {
        *(undefined4 *)(unaff_x19 + 0x58) = *(undefined4 *)(unaff_x19 + 0xa0);
        return;
      }
      uVar4 = FUN_0267e21c();
      if ((uVar4 & 1) == 0) {
        return;
      }
      uVar7 = FUN_0267f5a0();
      *(undefined4 *)(unaff_x19 + 0x58) = uVar7;
      return;
    }
    *(undefined4 *)(unaff_x19 + 0x70) = 2;
    uVar5 = FUN_0267dbbc();
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar6);
    }
    bVar3 = FUN_02681b9c(uVar5,0,0);
    *(byte *)(unaff_x19 + 0x54) = bVar3 & 1;
    uVar4 = FUN_0267e21c();
    uVar7 = 0;
    if ((uVar4 & 1) != 0) {
      uVar7 = FUN_0267f5a0();
    }
    *(undefined4 *)(unaff_x19 + 0x50) = uVar7;
    uVar4 = FUN_0267e21c();
    bVar2 = *(int *)(unaff_x19 + 0x18) == 1;
    if ((uVar4 & 1) == 0) {
      if (!bVar2) {
        return;
      }
      *(undefined4 *)(unaff_x19 + 0x38) = 0;
      return;
    }
  }
  else {
    *(undefined4 *)(unaff_x19 + 0x70) = 1;
    *(undefined8 *)(unaff_x19 + 0x44) = *(undefined8 *)(unaff_x19 + 0x90);
    *(undefined8 *)(unaff_x19 + 0x3c) = *(undefined8 *)(unaff_x19 + 0x88);
    uVar5 = FUN_0267dbbc();
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar6);
    }
    bVar3 = FUN_02681b9c(uVar5,0,0);
    *(byte *)(unaff_x19 + 0x4c) = bVar3 & 1;
    uVar4 = FUN_0267e21c();
    if ((uVar4 & 1) == 0) {
      param_4 = 0x3f800000;
      uVar7 = 0;
      param_2 = 0;
      param_3 = 0;
    }
    else {
      uVar7 = FUN_0267d928();
    }
    *(undefined4 *)(unaff_x19 + 0x3c) = uVar7;
    *(undefined4 *)(unaff_x19 + 0x40) = param_2;
    *(undefined4 *)(unaff_x19 + 0x44) = param_3;
    *(undefined4 *)(unaff_x19 + 0x48) = param_4;
    uVar4 = FUN_0267e21c();
    bVar2 = *(int *)(unaff_x19 + 0x18) == 2;
    if ((uVar4 & 1) == 0) {
      if (!bVar2) {
        return;
      }
      *(undefined4 *)(unaff_x19 + 0x38) = 0x3f800000;
      return;
    }
  }
  if (bVar2) {
    uVar7 = FUN_0267f5a0();
    *(undefined4 *)(unaff_x19 + 0x38) = uVar7;
  }
  return;
}


