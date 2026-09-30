/*
FUNCTION_NAME: Unity.Networking.Transport.NetworkPipelineProcessor$$CreatePipeline
ENTRY_POINT: 05e0ab3c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_3
*/


void Unity_Networking_Transport_NetworkPipelineProcessor__CreatePipeline(void)

{
  undefined8 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long *plVar11;
  long unaff_x22;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *unaff_x25;
  long *unaff_x26;
  float fVar14;
  undefined4 uVar15;
  
  thunk_FUN_02df485c();
  uVar5 = FUN_0634eb94();
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_0634eb94();
    if (((uVar5 & 1) != 0) || (*(char *)(unaff_x22 + 200) != '\0')) {
      if (*(long *)(unaff_x22 + 0x38) == 0) goto LAB_05e0b1b8;
      FUN_06633a94(*(long *)(unaff_x22 + 0x38),0);
    }
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dbee18 == '\0') {
    FUN_02d965b8(PTR_DAT_06a01128);
    DAT_06dbee18 = '\x01';
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_0362ed24();
  uVar7 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                    ();
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x25);
  }
  uVar5 = FUN_06350670(uVar6,0,0);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar1 = uVar7;
  if ((uVar5 & 1) == 0) {
    uVar1 = uVar6;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_06350670(uVar1,uVar13,0);
  fVar2 = DAT_010fd080;
  if ((uVar5 & 1) == 0) {
    iVar8 = *(int *)(unaff_x19 + 0x138);
    *(undefined1 *)(unaff_x20 + 0x91) = 0;
    if (0 < iVar8) goto LAB_05e0acb8;
  }
  else {
    fVar14 = *(float *)(unaff_x20 + 8) - *(float *)(unaff_x19 + 0x134);
    iVar8 = *(int *)(unaff_x19 + 0x138);
    *(bool *)(unaff_x20 + 0x91) = fVar14 <= DAT_010fd080;
    if ((0 < iVar8) && (fVar2 < fVar14)) {
LAB_05e0acb8:
      *(undefined8 *)(unaff_x19 + 0x134) = 0;
    }
  }
  FUN_0663421c();
  *(undefined8 *)(unaff_x19 + 0x48) = uVar7;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x48),uVar7);
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x21;
  LeanTween__value();
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                    ();
  puVar12 = (undefined8 *)(unaff_x19 + 0x40);
  *puVar12 = uVar6;
  LeanTween__value(puVar12,uVar6);
  uVar6 = *puVar12;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar5 = FUN_0634eb94(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    uVar6 = *puVar12;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dbee19 == '\0') {
      FUN_02d965b8(PTR_DAT_06a01128);
      DAT_06dbee19 = '\x01';
    }
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0362e420(uVar6);
  }
  puVar3 = PTR_DAT_06a01128;
  if (1 < *(int *)(unaff_x20 + 4) - 1U) goto LAB_05e0b198;
  if (*(int *)(*(long *)PTR_DAT_06a01128 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                    ();
  uVar7 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x25);
  }
  uVar5 = FUN_0634eb94(uVar7,0,0);
  if ((uVar5 & 1) == 0) {
LAB_05e0ae68:
    uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dbee1a == '\0') {
      FUN_02d965b8(PTR_DAT_06a01128);
      DAT_06dbee1a = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0362e420(uVar6);
    if (*(char *)(unaff_x19 + 0x145) != '\0') {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x40);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar5 = FUN_0634eb94(uVar6,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (DAT_06dbee1c == '\0') {
          FUN_02d965b8(PTR_DAT_06a01128);
          DAT_06dbee1c = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0362ed24();
      }
    }
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_06350670(uVar7,uVar6,0);
    puVar4 = PTR_DAT_06a0deb8;
    if (((uVar5 & 1) == 0) || (*(char *)(unaff_x19 + 0xf8) == '\0')) goto LAB_05e0ae68;
    if (*(char *)(unaff_x20 + 0x91) == '\0') {
      iVar8 = 1;
    }
    else {
      iVar8 = *(int *)(unaff_x19 + 0x138) + 1;
    }
    *(int *)(unaff_x19 + 0x138) = iVar8;
    plVar11 = (long *)**(undefined8 **)(*(long *)puVar4 + 0xb8);
    if (plVar11 == (long *)0x0) {
LAB_05e0b1b8:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = *plVar11;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06a0deb0) {
          puVar12 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x15) * 0x10 + 0x138);
          goto LAB_05e0afe0;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar12 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_06a0deb0,0x15);
LAB_05e0afe0:
    uVar15 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    lVar9 = *(long *)puVar3;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x134) = uVar15;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dbee1a == '\0') {
      FUN_02d965b8(PTR_DAT_06a01128);
      DAT_06dbee1a = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0362e420(uVar6);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dbee1b == '\0') {
      FUN_02d965b8(PTR_DAT_06a01128);
      DAT_06dbee1b = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_0362e420(uVar6);
  }
  *(undefined1 *)(unaff_x19 + 0xf8) = 0;
  FUN_0663421c();
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x38),0);
  if (*(char *)(unaff_x19 + 0x145) != '\0') {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_0634eb94(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x40);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dbee1d == '\0') {
        FUN_02d965b8(PTR_DAT_06a01128);
        DAT_06dbee1d = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0362e420(uVar6);
    }
  }
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined1 *)(unaff_x19 + 0x145) = 0;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x40),0);
  *(undefined1 *)(unaff_x20 + 0x92) = 0;
LAB_05e0b198:
  FUN_05e0c084();
  return;
}


