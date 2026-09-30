/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_delete_message_t_sessiongroup_handle_set
ENTRY_POINT: 08112d88
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_delete_message_t_sessiongroup_handle_set
               (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  uVar5 = FUN_08110464();
  if ((uVar5 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_08112ea0;
    if (((float)*(int *)(*(long *)(unaff_x19 + 0x40) + 0x1c) <= *(float *)(unaff_x19 + 0x98)) &&
       (5 < *(int *)(unaff_x19 + 0x9c))) {
      if (in_stack_00000008 == 0) goto LAB_08112ea0;
      *(undefined8 *)(in_stack_00000008 + 0x10) = *(undefined8 *)PTR_DAT_08f022a8;
      thunk_FUN_03d233cc();
    }
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_08112ea0;
    unaff_x20 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28);
    if (in_stack_00000008 == 0) {
      lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f02128);
      FUN_081105a4(lVar8,unaff_x20);
      in_stack_00000008 = lVar8;
    }
    if (((unaff_x20 == 0) || (plVar6 = (long *)FUN_08824940(unaff_x20,0), plVar6 == (long *)0x0)) ||
       (*plVar6 != *(long *)PTR_DAT_08eec300)) goto LAB_08112ea0;
    (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    puVar2 = PTR_DAT_08e699d0;
    in_stack_00000000._4_4_ = *(undefined4 *)(unaff_x19 + 0x4c);
    uVar7 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,(long)&stack0x00000000 + 4);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_08112ea0;
    uVar3 = thunk_FUN_03cf4e64(*(undefined8 *)puVar2);
    uVar7 = FUN_06f75284(*(undefined8 *)PTR_DAT_08f022b0,uVar7,uVar3,in_stack_00000008,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_08112ea0;
    uVar5 = FUN_06f74e14(*(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0x10),0);
    if (((uVar5 & 1) == 0) && (*(int *)(unaff_x19 + 0x50) == 2)) {
      uVar7 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08f022c0,in_stack_00000008,0);
      lVar8 = *(long *)(unaff_x19 + 0x40);
      if (lVar8 == 0) goto LAB_08112ea0;
      uVar3 = *(undefined8 *)(lVar8 + 0x30);
      auVar10 = FUN_085ca584(*(undefined8 *)(lVar8 + 0x10),0);
      FUN_0859f67c(uVar3,auVar10._0_8_,auVar10._8_8_,0);
      if (*(int *)(unaff_x19 + 0x4c) == 0) {
        if (in_stack_00000008 == 0) goto LAB_08112ea0;
        uVar5 = FUN_0811087c();
        if ((uVar5 & 1) != 0) {
          lVar9 = *(long *)PTR_DAT_08e762a0;
          lVar8 = *(long *)(lVar9 + 0x38);
          if (lVar8 == 0) {
            FUN_03cf12a0(lVar9);
            lVar8 = *(long *)(lVar9 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03cf1244();
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03cf1244();
          }
          uVar3 = **(undefined8 **)(lVar8 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
          }
          FUN_085a3e70(uVar7,uVar3,0);
          FUN_08111d28();
          *(int *)(unaff_x19 + 0x4c) = *(int *)(unaff_x19 + 0x4c) + 1;
          goto LAB_08112d20;
        }
      }
    }
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_08112ea0;
    if (*(int *)(unaff_x19 + 0x4c) < *(int *)(*(long *)(unaff_x19 + 0x40) + 0x28)) {
      if (in_stack_00000008 == 0) goto LAB_08112ea0;
      uVar5 = FUN_0811087c();
      if ((uVar5 & 1) != 0) {
        *(int *)(unaff_x19 + 0x4c) = *(int *)(unaff_x19 + 0x4c) + 1;
        lVar9 = *(long *)PTR_DAT_08e762a0;
        lVar8 = *(long *)(lVar9 + 0x38);
        if (lVar8 == 0) {
          FUN_03cf12a0(lVar9);
          lVar8 = *(long *)(lVar9 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03cf1244();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03cf1244();
        }
        uVar3 = **(undefined8 **)(lVar8 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
        }
        FUN_085a3e70(uVar7,uVar3,0);
        FUN_08111d28();
        goto LAB_08112d20;
      }
    }
    uVar7 = FUN_0882508c(unaff_x20,0);
    uVar7 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08f022b8,uVar7,0);
    uVar3 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_subscription_t_message_set
                      (unaff_x19 + 0x28);
    lVar8 = in_stack_00000008;
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f02260);
    FUN_08109c28(uVar4,uVar7,uVar3,lVar8,0);
    FUN_0479df5c(unaff_x19 + 0x28,0,0,uVar4,*(undefined8 *)PTR_DAT_08f02258);
    *(undefined1 *)(unaff_x19 + 0x68) = 1;
    FUN_08111c9c();
    goto LAB_08112d20;
  }
  if (*(char *)(unaff_x19 + 0x68) == '\0') {
    plVar6 = (long *)Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_subscription_t_message_set
                               (unaff_x19 + 0x28);
    if (plVar6 == (long *)0x0) {
LAB_08112ddc:
      if (unaff_x21 == (long *)0x0) goto LAB_08112ea0;
      uVar7 = FUN_0881fb60();
      *(undefined8 *)(unaff_x19 + 0x10) = uVar7;
      thunk_FUN_03d233cc();
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_08eebd18 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08eebd18))
      goto LAB_08112ddc;
    }
    FUN_0811120c();
    if (unaff_x21 == (long *)0x0) goto LAB_08112ea0;
    (**(code **)(*unaff_x21 + 0x188))();
    FUN_0479df5c(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x19 + 0x68) = 1;
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    uVar5 = FUN_06f74e14(*(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0x10),0);
    if ((uVar5 & 1) == 0) {
      lVar8 = *(long *)(unaff_x19 + 0x40);
      if (lVar8 == 0) goto LAB_08112ea0;
      if (*(char *)(lVar8 + 0x4a) != '\0') {
        uVar7 = *(undefined8 *)(lVar8 + 0x30);
        auVar10 = FUN_085ca584(*(undefined8 *)(lVar8 + 0x10),0);
        FUN_0859f794(uVar7,auVar10._0_8_,auVar10._8_8_,0);
      }
    }
LAB_08112d20:
    FUN_088248d8(unaff_x20,0);
    return;
  }
LAB_08112ea0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


