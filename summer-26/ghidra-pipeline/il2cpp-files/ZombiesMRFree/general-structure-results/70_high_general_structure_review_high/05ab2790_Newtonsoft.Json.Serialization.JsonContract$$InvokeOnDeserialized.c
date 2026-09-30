/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnDeserialized
ENTRY_POINT: 05ab2790
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined4 *puVar12;
  uint unaff_w20;
  long *plVar13;
  long *unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 in_stack_00000038;
  
  plVar9 = (long *)FUN_030417b0(param_1,unaff_w20 >> 1 & 1);
  if ((unaff_w20 & 1) == 0) {
    if (plVar9 == (long *)0x0) goto LAB_05ab2978;
LAB_05ab2878:
    uVar16 = 0;
  }
  else {
    if (plVar9 == (long *)0x0) {
LAB_05ab2978:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (plVar9[3] == 0) goto LAB_05ab2878;
    if ((int)plVar9[3] == 0) goto LAB_05ab297c;
    plVar13 = plVar9 + 4;
    if (*plVar13 != 0) goto LAB_05ab2878;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    plVar10 = (long *)FUN_05aa3bf0();
    if (plVar10 == (long *)0x0) goto LAB_05ab2978;
    plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
    if (plVar10 != (long *)0x0) {
      bVar7 = *(byte *)(*unaff_x22 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar7) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar7 * 8 + -8) != *unaff_x22)) {
LAB_05ab2980:
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(plVar10);
      }
      lVar11 = thunk_FUN_03010710(plVar10,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar11 == 0) {
        uVar14 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                           ();
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar14,0);
      }
      bVar7 = *(byte *)(*unaff_x22 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar7) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar7 * 8 + -8) != *unaff_x22))
      goto LAB_05ab2980;
    }
    if ((int)plVar9[3] == 0) goto LAB_05ab297c;
    *plVar13 = (long)plVar10;
    thunk_FUN_03048534(plVar13,plVar10);
    uVar16 = 1;
  }
  uVar3 = *(uint *)(plVar9 + 3);
  while( true ) {
    if ((int)uVar3 <= (int)uVar16) {
      return plVar9;
    }
    if (uVar3 <= uVar16) break;
    lVar11 = plVar9[(long)(int)uVar16 + 4];
    if (lVar11 == 0) goto LAB_05ab2978;
    puVar12 = *(undefined4 **)(lVar11 + 0x90);
    uVar14 = *(undefined8 *)(lVar11 + 0x48);
    uVar4 = *(undefined4 *)(lVar11 + 0x1c);
    uVar1 = *puVar12;
    uVar2 = puVar12[3];
    uVar5 = puVar12[4];
    uVar8 = FUN_05ab29bc(lVar11);
    uVar6 = *(undefined4 *)(lVar11 + 0x20);
    in_stack_00000038._4_2_ = (ushort)((uint)uVar5 >> 8) & 0xff;
    uVar15 = *(undefined8 *)(lVar11 + 0x68);
    if (*(int *)(*(long *)PTR_DAT_06f6d8a0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d8a0);
    }
    FUN_05a5a548((long)&stack0x00000038 + 4,0);
    uVar14 = FUN_05aa58b8(uVar14,0,uVar4,uVar8,uVar6,uVar15,uVar1,uVar2);
    *(undefined8 *)(lVar11 + 0xc0) = uVar14;
    thunk_FUN_03048534((undefined8 *)(lVar11 + 0xc0),uVar14);
    uVar3 = *(uint *)(plVar9 + 3);
    uVar16 = uVar16 + 1;
  }
LAB_05ab297c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


