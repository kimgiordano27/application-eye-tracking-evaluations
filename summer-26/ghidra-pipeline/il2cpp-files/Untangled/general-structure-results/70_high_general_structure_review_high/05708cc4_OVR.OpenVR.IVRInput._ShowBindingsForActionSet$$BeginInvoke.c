/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._ShowBindingsForActionSet$$BeginInvoke
ENTRY_POINT: 05708cc4
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2
*/


undefined8
OVR_OpenVR_IVRInput__ShowBindingsForActionSet__BeginInvoke
          (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar8;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_05708ee8;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar3 = (undefined8 *)FUN_02eea86c();
LAB_05708ee8:
  lVar4 = (*(code *)*puVar3)();
  *unaff_x20 = lVar4;
  thunk_FUN_02f411dc();
  puVar1 = PTR_DAT_06d55760;
  plVar8 = *(long **)(unaff_x21 + 0x28);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06d55760) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05708f68;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(plVar8,*(long *)PTR_DAT_06d55760,0);
LAB_05708f68:
    iVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if (2 < iVar2) {
      plVar8 = *(long **)(unaff_x21 + 0x28);
      (**(code **)(*unaff_x19 + 0x278))();
      if (*(int *)(*(long *)PTR_DAT_06d06338 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d06338);
      }
      uVar5 = FUN_055b5920(0);
      if (*unaff_x20 != 0) {
        thunk_FUN_02ebbee0(*unaff_x20,0);
        FUN_056f1750(*(undefined8 *)PTR_DAT_06d57c18,uVar5);
        if (*(int *)(*(long *)PTR_DAT_06d55140 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)PTR_DAT_06d55140);
        }
        uVar5 = FUN_0569330c();
        if (plVar8 != (long *)0x0) {
          lVar4 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto OVR_OpenVR_IVRIOBuffer__Close__BeginInvoke;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_02eea86c(plVar8,*(long *)puVar1,1);
OVR_OpenVR_IVRIOBuffer__Close__BeginInvoke:
          (*(code *)*puVar3)(plVar8,3,uVar5,0,puVar3[1]);
          goto LAB_05709098;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
LAB_05709098:
  FUN_05698a14();
  return 1;
}


