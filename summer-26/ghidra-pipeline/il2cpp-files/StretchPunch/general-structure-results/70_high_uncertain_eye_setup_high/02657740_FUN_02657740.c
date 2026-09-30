/*
FUNCTION_NAME: FUN_02657740
ENTRY_POINT: 02657740
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_02657740(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long local_28;
  
  if ((DAT_044a3bb5 & 1) == 0) {
    FUN_01d7d918(StringLiteral_2250);
    FUN_01d7d918(StringLiteral_2251);
    FUN_01d7d918(StringLiteral_2252);
    FUN_01d7d918(StringLiteral_2253);
    FUN_01d7d918(StringLiteral_2254);
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                );
    DAT_044a3bb5 = 1;
  }
  local_28 = 0;
  lVar2 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar2 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  puVar1 = 
  Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
  ;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  uVar5 = **(undefined8 **)(lVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*(long *)puVar1);
  }
  uVar3 = FUN_03d755c0(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    uVar5 = FUN_021594ac(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18));
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    **(undefined8 **)(lVar2 + 0xb8) = uVar5;
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    thunk_FUN_01e10808(*(undefined8 *)(lVar2 + 0xb8),uVar5);
  }
  lVar2 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar2 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  lVar4 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01dde7f8();
  }
  if (lVar2 != 0) {
    uVar3 = FUN_02b258e8(lVar2,**(undefined8 **)(lVar4 + 0xb8),&local_28,
                         *(undefined8 *)StringLiteral_2251);
    if ((uVar3 & 1) == 0) {
      lVar2 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_2254);
      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                (lVar2,*(undefined8 *)StringLiteral_2253);
      lVar4 = *(long *)(param_2 + 0x20);
      local_28 = lVar2;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01dde7f8();
      }
      lVar2 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar2 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
      }
      lVar4 = *(long *)(param_2 + 0x20);
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01dde7f8(lVar4);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01dde7f8();
      }
      if (lVar2 == 0) goto LAB_02657b00;
      FUN_02b23db4(lVar2,**(undefined8 **)(lVar4 + 0xb8),local_28,*(undefined8 *)StringLiteral_2250)
      ;
    }
    if (local_28 != 0) {
      FUN_02f17d24(local_28,param_1,*(undefined8 *)StringLiteral_2252);
      lVar2 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar2 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01dde7f8();
      }
      return **(undefined8 **)(lVar2 + 0xb8);
    }
  }
LAB_02657b00:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


