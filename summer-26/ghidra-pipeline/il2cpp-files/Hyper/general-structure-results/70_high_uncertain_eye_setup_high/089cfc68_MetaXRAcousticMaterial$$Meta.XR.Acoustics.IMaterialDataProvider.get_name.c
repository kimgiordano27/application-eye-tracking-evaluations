/*
FUNCTION_NAME: MetaXRAcousticMaterial$$Meta.XR.Acoustics.IMaterialDataProvider.get_name
ENTRY_POINT: 089cfc68
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void MetaXRAcousticMaterial__Meta_XR_Acoustics_IMaterialDataProvider_get_name(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w9;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar6;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (in_w9 == 0) {
    thunk_FUN_049a583c(param_1);
  }
  if (DAT_0b32be1e == '\0') {
    FUN_04947ee4(PTR_DAT_0ac4e4f0);
    DAT_0b32be1e = '\x01';
  }
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar3 = FUN_04947fd0(*unaff_x26,1);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *unaff_x28;
      thunk_FUN_049ee3d8();
      uVar4 = thunk_FUN_04983f60(*unaff_x27);
      FUN_0894403c();
      puVar2 = PTR_DAT_0ac4fde0;
      puVar1 = PTR_DAT_0ac4e320;
      if (0x5c < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined8 *)(unaff_x21 + 0x300) = uVar4;
        thunk_FUN_049ee3d8(unaff_x21 + 0x300,uVar4);
        uVar4 = FUN_08d895f0(*(undefined8 *)puVar2,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_049a583c(*(long *)puVar1);
        }
        if (DAT_0b32be1f == '\0') {
          FUN_04947ee4(PTR_DAT_0ac4e320);
          DAT_0b32be1f = '\x01';
        }
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar3 = *(long *)puVar1;
        }
        uVar6 = **(undefined8 **)(lVar3 + 0xb8);
        uVar5 = thunk_FUN_04983f60(*unaff_x27);
        FUN_0894403c(uVar5,uVar4,uVar6,0,0,0,0,0);
        puVar2 = PTR_DAT_0ac4ff50;
        puVar1 = PTR_DAT_0ac4e4f8;
        if (0x5d < *(uint *)(unaff_x21 + 0x18)) {
          *(undefined8 *)(unaff_x21 + 0x308) = uVar5;
          thunk_FUN_049ee3d8(unaff_x21 + 0x308,uVar5);
          uVar4 = FUN_08d895f0(*(undefined8 *)puVar2,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_049a583c(*(long *)puVar1);
          }
          if (DAT_0b32be20 == '\0') {
            FUN_04947ee4(PTR_DAT_0ac4e4f8);
            DAT_0b32be20 = '\x01';
          }
          lVar3 = *(long *)puVar1;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            lVar3 = *(long *)puVar1;
          }
          uVar5 = **(undefined8 **)(lVar3 + 0xb8);
          lVar3 = FUN_04947fd0(*unaff_x26,2);
          if (lVar3 == 0) goto LAB_089cff80;
          if (*(int *)(lVar3 + 0x18) != 0) {
            *(undefined8 *)(lVar3 + 0x20) = *unaff_x28;
            thunk_FUN_049ee3d8((undefined8 *)(lVar3 + 0x20));
            if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_0ac50360;
              thunk_FUN_049ee3d8();
              uVar6 = thunk_FUN_04983f60(*unaff_x27);
              FUN_0894403c(uVar6,uVar4,uVar5,lVar3,0,0,0,0);
              puVar2 = PTR_DAT_0ac4d5f8;
              puVar1 = PTR_DAT_0ac486f8;
              if (0x5e < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined8 *)(unaff_x21 + 0x310) = uVar6;
                thunk_FUN_049ee3d8(unaff_x21 + 0x310,uVar6);
                uVar4 = thunk_FUN_04983f60(*unaff_x27);
                Haptics_Tools_Interpolate__Cubic(uVar4,0,0);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_049a583c();
                }
                uVar4 = FUN_08941a14(in_stack_00000010,in_stack_00000018,uVar4,0);
                **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar4;
                thunk_FUN_049ee3d8(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar4);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
LAB_089cff80:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


