/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_control_audio_injection_t_sessiongroup_handle_set
ENTRY_POINT: 081371ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_control_audio_injection_t_sessiongroup_handle_set
          (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000018;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e69860);
  FUN_03c8f898(PTR_DAT_08e78740);
  FUN_03c8f898(PTR_DAT_08e693f0);
  FUN_03c8f898(PTR_DAT_08e80538);
  FUN_03c8f898(PTR_DAT_08e698e0);
  FUN_03c8f898(PTR_DAT_08e6b480);
  FUN_03c8f898(PTR_DAT_08f033d8);
  FUN_03c8f898(PTR_DAT_08f02d50);
  FUN_03c8f898(PTR_DAT_08e80c38);
  FUN_03c8f898(PTR_DAT_08f033e0);
  FUN_03c8f898(PTR_DAT_08e87d90);
  FUN_03c8f898(PTR_DAT_08e87d98);
  FUN_03c8f898(PTR_DAT_08e7cd00);
  *(undefined1 *)(unaff_x21 + 0xdd4) = 1;
  puVar3 = PTR_DAT_08e80538;
  puVar2 = PTR_DAT_08e698e0;
  in_stack_00000018 = 0;
  if (unaff_x20 == (long *)0x0) {
LAB_081372e0:
    lVar8 = thunk_FUN_03cf5138();
    puVar2 = PTR_DAT_08f033c8;
    if (lVar8 == 0) {
      if (unaff_x20 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_08e6b480 + 0x130);
        if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
           (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)PTR_DAT_08e6b480)) {
          if (*(int *)(*(long *)PTR_DAT_08f033c8 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar5 = FUN_08137580();
          if ((uVar5 & 1) != 0) {
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            uVar4 = FUN_081376d4();
            return uVar4;
          }
        }
      }
      if (*(int *)(*(long *)PTR_DAT_08e693f0 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_070c20bc(0);
      if (*(int *)(*(long *)PTR_DAT_08e78740 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e78740);
      }
      uVar4 = FUN_0707256c();
    }
    else {
      uVar4 = FUN_04608a44(lVar8,*(undefined8 *)PTR_DAT_08f033d8);
      uVar4 = FUN_047ed854(*(undefined8 *)PTR_DAT_08e7cd00,uVar4,*(undefined8 *)PTR_DAT_08f033e0);
    }
    return uVar4;
  }
  lVar8 = *unaff_x20;
  if (lVar8 == *(long *)PTR_DAT_08e698e0) {
    puVar6 = (undefined8 *)thunk_FUN_03cf5388();
    in_stack_00000018 = *puVar6;
    if (unaff_x19 != (long *)0x0) {
      lVar8 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f02d50) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 10) * 0x10 + 0x138);
            goto LAB_081374e0;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348();
LAB_081374e0:
      uVar4 = (*(code *)*puVar6)();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)puVar2);
      }
      uVar4 = FUN_070e249c(&stack0x00000018,uVar4,0);
      return uVar4;
    }
  }
  else {
    if (lVar8 != *(long *)PTR_DAT_08e80538) {
      if (lVar8 == *(long *)PTR_DAT_08e69860) {
        pcVar7 = (char *)thunk_FUN_03cf5388();
        puVar6 = (undefined8 *)PTR_DAT_08e87d90;
        if (*pcVar7 != '\0') {
          puVar6 = (undefined8 *)PTR_DAT_08e87d98;
        }
        return *puVar6;
      }
      goto LAB_081372e0;
    }
    thunk_FUN_03cf5388();
    if (unaff_x19 != (long *)0x0) {
      lVar8 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f02d50) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 10) * 0x10 + 0x138);
            goto 
            Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_control_audio_injection_create
            ;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348();
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_control_audio_injection_create:
      (*(code *)*puVar6)();
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)puVar3);
      }
      uVar4 = FUN_070e6584();
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


