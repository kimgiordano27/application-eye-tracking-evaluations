/*
FUNCTION_NAME: FUN_03a33848
ENTRY_POINT: 03a33848
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a33c9c) */

void FUN_03a33848(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long local_48;
  long local_40;
  char local_34 [4];
  
  puVar1 = StringLiteral_1973;
  if ((DAT_044aaf1c & 1) == 0) {
    FUN_01d7d918(
                Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                );
    FUN_01d7d918(PTR_DAT_04237970);
    FUN_01d7d918(PTR_DAT_04237978);
    FUN_01d7d918(PTR_DAT_04237980);
    FUN_01d7d918(PTR_DAT_04237988);
    FUN_01d7d918(StringLiteral_1830);
    FUN_01d7d918(StringLiteral_1319);
    FUN_01d7d918(StringLiteral_1973);
    FUN_01d7d918(PTR_DAT_04237990);
    FUN_01d7d918(PTR_DAT_04237998);
    FUN_01d7d918(PTR_DAT_042379a0);
    FUN_01d7d918(StringLiteral_1827);
    FUN_01d7d918(PTR_DAT_042379a8);
    FUN_01d7d918(StringLiteral_2241);
    FUN_01d7d918(PTR_DAT_042379b0);
    DAT_044aaf1c = 1;
  }
  lVar3 = *(long *)puVar1;
  local_48 = 0;
  local_40 = 0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *(long *)puVar1;
  }
  uVar10 = **(undefined8 **)(lVar3 + 0xb8);
  local_34[0] = '\0';
  FUN_033f4894(uVar10,local_34,0);
  if (*(int *)(*(long *)StringLiteral_1319 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar3 = FUN_03a2d354(*(undefined8 *)StringLiteral_2241);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  FUN_020a31f4(lVar3,param_1,*(undefined8 *)StringLiteral_1830);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  FUN_03a33d84(param_1);
  plVar4 = (long *)FUN_03a34018(param_1);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar3 = *plVar4;
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_1827) {
        puVar5 = (undefined8 *)(lVar3 + (long)(*piVar9 + 9) * 0x10 + 0x138);
        goto LAB_03a33a14;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_01dde8fc(plVar4,*(long *)StringLiteral_1827,9);
LAB_03a33a14:
  (*(code *)*puVar5)(plVar4,param_1,puVar5[1]);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  uVar6 = FUN_03a34018(param_1);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70(uVar6,uVar6);
  }
  uVar8 = FUN_02b258e8(lVar3,uVar6,&local_40,*(undefined8 *)PTR_DAT_04237988);
  if ((uVar8 & 1) == 0) {
    lVar3 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042379a0);
    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
              (lVar3,*(undefined8 *)PTR_DAT_04237998);
    lVar7 = *(long *)puVar1;
    local_40 = lVar3;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar7 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    uVar6 = FUN_03a34018(param_1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70(uVar6,uVar6);
    }
    FUN_02b23db4(lVar3,uVar6,local_40,*(undefined8 *)PTR_DAT_04237978);
  }
  puVar2 = PTR_DAT_04237990;
  if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar8 = FUN_02f17d24(local_40,param_1,*(undefined8 *)PTR_DAT_04237990);
  if ((uVar8 & 1) == 0) {
    uVar6 = FUN_03a34018(param_1);
    uVar6 = FUN_0326cb0c(*(undefined8 *)PTR_DAT_042379b0,uVar6,param_1,0);
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_03d41b48(uVar6,0);
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  uVar6 = FUN_03a3407c(param_1);
  if (lVar3 != 0) {
    uVar8 = FUN_02b258e8(lVar3,uVar6,&local_48,*(undefined8 *)PTR_DAT_04237980);
    if ((uVar8 & 1) == 0) {
      lVar3 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042379a0);
      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                (lVar3,*(undefined8 *)PTR_DAT_04237998);
      lVar7 = *(long *)puVar1;
      local_48 = lVar3;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar7 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      uVar6 = FUN_03a3407c(param_1);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70(uVar6,uVar6);
      }
      FUN_02b23db4(lVar3,uVar6,local_48,*(undefined8 *)PTR_DAT_04237970);
    }
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar8 = FUN_02f17d24(local_48,param_1,*(undefined8 *)puVar2);
    if ((uVar8 & 1) == 0) {
      uVar6 = FUN_03a3407c(param_1);
      uVar6 = FUN_03aea920(uVar6,0);
      uVar6 = FUN_0326cb0c(*(undefined8 *)PTR_DAT_042379a8,uVar6,param_1,0);
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_03d41b48(uVar6,0);
    }
    if (local_34[0] != '\0') {
      thunk_FUN_01dccd6c(uVar10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70(uVar6,uVar6);
}


