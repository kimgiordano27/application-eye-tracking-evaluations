/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$HasAnyLabel
ENTRY_POINT: 04829fbc
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__HasAnyLabel
               (float param_1,ulong param_2,ulong param_3,float param_4,float param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s14;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000040;
  uint uStack0000000000000044;
  uint in_stack_00000048;
  
  while( true ) {
    fVar10 = (float)param_3 * *(float *)(unaff_x19 + 0x2c);
    uVar4 = (ulong)(uint)fVar10;
    if (unaff_s14 * (fVar10 + param_1 * param_4 + (float)param_2 * param_5) < 0.0) {
      unaff_s11 = unaff_s11 * *(float *)(unaff_x19 + 0x34);
    }
    uVar9 = FUN_049ac8b0(unaff_x22,0);
    uVar11 = (ulong)(uint)(unaff_s9 * unaff_s11);
    uVar12 = (ulong)(uint)(unaff_s10 * unaff_s11);
    if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_048660c4(uVar9,uVar4,param_3,in_stack_00000020._4_4_ * unaff_s11,uVar11,uVar12,0);
    FUN_049ad0e4(in_stack_00000020._4_4_ * unaff_s11,unaff_x22,0);
    do {
      do {
        while( true ) {
          lVar5 = *(long *)(unaff_x19 + 0x48);
          unaff_w20 = unaff_w20 + 1;
          if (lVar5 == 0) goto LAB_0482a074;
          iVar1 = *(int *)(lVar5 + 0x18);
          if (iVar1 <= unaff_w20) {
            *(undefined4 *)(lVar5 + 0x18) = 0;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (0 < iVar1) {
              FUN_031dd574(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
            }
            lVar5 = *(long *)(unaff_x19 + 0x50);
            if (lVar5 != 0) {
              *(undefined4 *)(lVar5 + 0x18) = 0;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              return;
            }
            goto LAB_0482a074;
          }
          unaff_x22 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                (lVar5,unaff_w20,*unaff_x25);
          param_2 = uVar11;
          param_3 = uVar12;
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_016466fc(*unaff_x26);
            param_2 = uVar11;
            param_3 = uVar12;
          }
          uVar4 = FUN_051d94d4(unaff_x22,0,0);
          if ((uVar4 & 1) == 0) break;
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0482a074;
          lVar5 = *(long *)(unaff_x19 + 0x60);
          uVar3 = FUN_032e1bd8(*(long *)(unaff_x19 + 0x50),unaff_w20,*unaff_x27);
          if (lVar5 == 0) goto LAB_0482a074;
          FUN_042680a4(lVar5,uVar3,*unaff_x24);
          uVar11 = param_2;
          uVar12 = param_3;
        }
        if (unaff_x22 == 0) goto LAB_0482a074;
        uVar3 = FUN_051d2b30(unaff_x22,0);
        lVar5 = *(long *)(unaff_x19 + 0x58);
        if (lVar5 == 0) goto LAB_0482a074;
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *unaff_x28;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_0482a074;
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = uVar3;
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar5,uVar3);
        }
        if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_0482a074;
        uVar4 = FUN_042686d4(*(long *)(unaff_x19 + 0x60),uVar3,&stack0x00000040,*unaff_x29);
        uVar11 = param_2;
        uVar12 = param_3;
      } while ((uVar4 & 1) == 0);
      lVar5 = FUN_051e5130();
      FUN_049ac8b0(unaff_x22,0);
      if (lVar5 == 0) goto LAB_0482a074;
      uVar9 = FUN_04f1c838(lVar5,0);
      uVar12 = (ulong)in_stack_00000048;
      uVar11 = (ulong)uStack0000000000000044;
      uVar4 = FUN_051db408(uStack0000000000000040,uVar11,uVar12,uVar9,param_2,param_3);
    } while ((uVar4 & 1) != 0);
    fVar10 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) +
             (float)((ulong)*(undefined8 *)(unaff_x19 + 0x24) >> 0x20);
    uVar4 = FUN_051db408(uVar9,param_2,param_3,
                         CONCAT44(fVar10,(float)*(undefined8 *)(unaff_x19 + 0x18) +
                                         (float)*(undefined8 *)(unaff_x19 + 0x24)),fVar10,
                         *(float *)(unaff_x19 + 0x20) + *(float *)(unaff_x19 + 0x2c));
    fVar10 = *(float *)(unaff_x19 + 0x30);
    unaff_s14 = 1.0;
    if ((uVar4 & 1) == 0) {
      unaff_s14 = -1.0;
    }
    fVar8 = (float)FUN_051db3b8(uVar9);
    lVar5 = FUN_051e5130();
    FUN_049abc90(unaff_x22,0);
    if (lVar5 == 0) break;
    unaff_s11 = unaff_s14 * fVar10 * fVar8;
    param_1 = (float)FUN_04f1c538(lVar5,0);
    param_4 = *(float *)(unaff_x19 + 0x24);
    param_5 = *(float *)(unaff_x19 + 0x28);
  }
LAB_0482a074:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


