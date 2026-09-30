/*
FUNCTION_NAME: VRFS.Audio.MicRecorder.<Upload>d__32$$System.IDisposable.Dispose
ENTRY_POINT: 0273d860
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 VRFS_Audio_MicRecorder_<Upload>d__32__System_IDisposable_Dispose(void)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  code *in_x9;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar9;
  undefined8 *unaff_x25;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  long *unaff_x28;
  
                    /* try { // try from 0273d860 to 0283d867 has its CatchHandler @ 0273d868 */
  (*in_x9)();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0273d84c with catch @ 0273d868
                       catch(type#2 @ 00000000) { ... } // from try @ 0273d860 with catch @ 0273d868
                        */
  FUN_02519a6c();
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_016466fc(*unaff_x28);
  }
  FUN_036998dc(0);
  uVar11 = *unaff_x21;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  if (DAT_072332e8 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06da8a48);
    thunk_FUN_0159f088(PTR_DAT_06dd2198);
    DAT_072332e8 = '\x01';
  }
  puVar2 = PTR_DAT_06dd2198;
  lVar3 = *(long *)PTR_DAT_06dd2198;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar3 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_06e31158;
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_03699984(uVar11,0);
  }
  lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar2);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  FUN_028fac88(lVar3);
  plVar4 = (long *)(**(code **)(unaff_x23 + 0x18))(*(undefined8 *)(unaff_x23 + 0x40),lVar3);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar3 = *plVar4;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06e14538) {
        puVar5 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_0273d9e0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_015c2a80(plVar4,*(long *)PTR_DAT_06e14538,3);
LAB_0273d9e0:
  uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  if ((uVar7 & 1) != 0) {
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar9 = *unaff_x24;
    uVar11 = *unaff_x25;
    uVar10 = *unaff_x21;
    uVar1 = *(ushort *)(lVar6 + 0x132);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_015c2790();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x132);
    }
    pcVar12 = *(code **)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x70) + 8);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_015c2790();
    }
    (*pcVar12)(plVar4,uVar9,uVar11,uVar10,0,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x70));
  }
  return *unaff_x21;
}


