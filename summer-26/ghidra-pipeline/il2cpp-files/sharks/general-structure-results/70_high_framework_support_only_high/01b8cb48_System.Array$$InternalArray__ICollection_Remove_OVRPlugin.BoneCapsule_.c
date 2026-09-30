/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.BoneCapsule>
ENTRY_POINT: 01b8cb48
PROGRAM: sharks-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__ICollection_Remove<OVRPlugin_BoneCapsule>(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  long unaff_x21;
  undefined4 uStack000000000000000c;
  
  FUN_017fc350(PTR_DAT_037f3298);
  *(undefined1 *)(unaff_x21 + 0x6ad) = 1;
  uStack000000000000000c = *(undefined4 *)(unaff_x20 + 4);
  switch(uStack000000000000000c) {
  case 0:
    return 0;
  case 1:
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    uVar3 = FUN_023249f0();
    return uVar3;
  case 2:
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    uVar3 = FUN_02324220(unaff_x20 + 0x70,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x88));
    return uVar3;
  case 3:
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    uVar3 = FUN_02323f90(unaff_x20 + 0x20,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xa8));
    return uVar3;
  case 4:
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    uVar3 = FUN_02325088(unaff_x20 + 0x48,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xb8));
    return uVar3;
  case 5:
    break;
  default:
    lVar2 = FUN_015d6984(*(undefined8 *)(unaff_x19 + 0x20));
    uVar3 = thunk_FUN_018617ec(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x50),&stack0x0000000c);
    uVar4 = thunk_FUN_01851c08(PTR_DAT_037f9560);
    uVar3 = FUN_02a473b8(uVar4,uVar3,0);
    thunk_FUN_01851c08(PTR_DAT_037f8d50);
    uVar4 = thunk_FUN_01861bbc();
    FUN_02bcf690(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar4);
  }
  plVar7 = *(long **)(unaff_x20 + 0x10);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  lVar2 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_037f3298) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_01b8ccac;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_0185dba8(plVar7,*(long *)PTR_DAT_037f3298,0);
LAB_01b8ccac:
                    /* WARNING: Could not recover jumptable at 0x01b8ccc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar1)(plVar7,puVar1[1]);
  return uVar3;
}


