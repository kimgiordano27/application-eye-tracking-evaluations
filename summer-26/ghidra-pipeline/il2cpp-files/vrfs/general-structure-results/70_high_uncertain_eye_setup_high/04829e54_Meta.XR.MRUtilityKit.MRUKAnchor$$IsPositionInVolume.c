/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$IsPositionInVolume
ENTRY_POINT: 04829e54
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__IsPositionInVolume
               (long param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long in_x9;
  long in_x10;
  int in_w11;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  float unaff_s9;
  float unaff_s10;
  float fVar13;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000040;
  uint uStack0000000000000044;
  uint in_stack_00000048;
  
  while (*(int *)(param_1 + 0x1c) = in_w11 + 1, in_x9 != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    if (uVar2 < *(uint *)(in_x9 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar2 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar2 * 4 + 0x20) = param_5;
      uVar4 = param_3;
      uVar11 = param_4;
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(in_x10 + 0x20) + 0xc0) + 0x58) + 8))
                (param_1,param_5);
      uVar4 = param_3;
      uVar11 = param_4;
    }
    if (*(long *)(unaff_x19 + 0x60) == 0) break;
    uVar5 = FUN_042686d4(*(long *)(unaff_x19 + 0x60),param_5,&stack0x00000040,*unaff_x29);
    param_3 = uVar4;
    param_4 = uVar11;
    if ((uVar5 & 1) != 0) {
      lVar6 = FUN_051e5130();
      FUN_049ac8b0(unaff_x22,0);
      if (lVar6 == 0) break;
      uVar8 = FUN_04f1c838(lVar6,0);
      param_4 = (ulong)in_stack_00000048;
      param_3 = (ulong)uStack0000000000000044;
      uVar5 = FUN_051db408(uStack0000000000000040,param_3,param_4,uVar8,uVar4,uVar11);
      if ((uVar5 & 1) == 0) {
        fVar12 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(unaff_x19 + 0x24) >> 0x20);
        uVar5 = FUN_051db408(uVar8,uVar4,uVar11,
                             CONCAT44(fVar12,(float)*(undefined8 *)(unaff_x19 + 0x18) +
                                             (float)*(undefined8 *)(unaff_x19 + 0x24)),fVar12,
                             *(float *)(unaff_x19 + 0x20) + *(float *)(unaff_x19 + 0x2c));
        fVar13 = *(float *)(unaff_x19 + 0x30);
        fVar12 = 1.0;
        if ((uVar5 & 1) == 0) {
          fVar12 = -1.0;
        }
        fVar7 = (float)FUN_051db3b8(uVar8);
        fVar9 = (float)uVar4;
        lVar6 = FUN_051e5130();
        FUN_049abc90(unaff_x22,0);
        if (lVar6 == 0) break;
        fVar7 = fVar12 * fVar13 * fVar7;
        fVar13 = (float)FUN_04f1c538(lVar6,0);
        fVar10 = (float)uVar11 * *(float *)(unaff_x19 + 0x2c);
        uVar4 = (ulong)(uint)fVar10;
        if (fVar12 * (fVar10 + fVar13 * *(float *)(unaff_x19 + 0x24) +
                               fVar9 * *(float *)(unaff_x19 + 0x28)) < 0.0) {
          fVar7 = fVar7 * *(float *)(unaff_x19 + 0x34);
        }
        uVar8 = FUN_049ac8b0(unaff_x22,0);
        param_3 = (ulong)(uint)(unaff_s9 * fVar7);
        param_4 = (ulong)(uint)(unaff_s10 * fVar7);
        if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        FUN_048660c4(uVar8,uVar4,uVar11,in_stack_00000020._4_4_ * fVar7,param_3,param_4,0);
        FUN_049ad0e4(in_stack_00000020._4_4_ * fVar7,unaff_x22,0);
      }
    }
    while( true ) {
      lVar6 = *(long *)(unaff_x19 + 0x48);
      unaff_w20 = unaff_w20 + 1;
      if (lVar6 == 0) goto LAB_0482a074;
      iVar1 = *(int *)(lVar6 + 0x18);
      if (iVar1 <= unaff_w20) {
        *(undefined4 *)(lVar6 + 0x18) = 0;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_031dd574(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
        }
        lVar6 = *(long *)(unaff_x19 + 0x50);
        if (lVar6 != 0) {
          *(undefined4 *)(lVar6 + 0x18) = 0;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          return;
        }
        goto LAB_0482a074;
      }
      unaff_x22 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                            (lVar6,unaff_w20,*unaff_x25);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_016466fc(*unaff_x26);
      }
      uVar4 = FUN_051d94d4(unaff_x22,0,0);
      if ((uVar4 & 1) == 0) break;
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0482a074;
      lVar6 = *(long *)(unaff_x19 + 0x60);
      uVar3 = FUN_032e1bd8(*(long *)(unaff_x19 + 0x50),unaff_w20,*unaff_x27);
      if (lVar6 == 0) goto LAB_0482a074;
      FUN_042680a4(lVar6,uVar3,*unaff_x24);
    }
    if (unaff_x22 == 0) break;
    param_5 = FUN_051d2b30(unaff_x22,0);
    param_1 = *(long *)(unaff_x19 + 0x58);
    if (param_1 == 0) break;
    in_w11 = *(int *)(param_1 + 0x1c);
    in_x10 = *unaff_x28;
    in_x9 = *(long *)(param_1 + 0x10);
  }
LAB_0482a074:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


