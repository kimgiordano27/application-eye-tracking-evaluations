/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$.cctor
ENTRY_POINT: 044b9ef4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>___cctor(void)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x24;
  
  puVar2 = PTR_DAT_067678e8;
  plVar3 = (long *)FUN_05015c2c();
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_044ba230;
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  plVar5 = (long *)FUN_05015c2c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28),0);
  if (plVar5 == (long *)0x0) goto LAB_044ba22c;
  uVar6 = (**(code **)(*plVar5 + 0x298))(plVar5,plVar3,*(undefined8 *)(*plVar5 + 0x2a0));
  if ((uVar6 & 1) == 0) {
    if (plVar3 == (long *)0x0) goto LAB_044ba22c;
    uVar6 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
    if ((uVar6 & 1) != 0) {
      uVar9 = (**(code **)(*plVar3 + 0x448))(plVar3,*(undefined8 *)(*plVar3 + 0x450));
      uVar10 = *(undefined8 *)PTR_DAT_06766c20;
      if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)(unaff_x24 + 0xe0));
      }
      uVar10 = FUN_05015c2c(uVar10,0);
      uVar6 = FUN_0501ed54(uVar9,uVar10,0);
      if ((uVar6 & 1) != 0) {
        lVar4 = (**(code **)(*plVar3 + 0x468))(plVar3,*(undefined8 *)(*plVar3 + 0x470));
        if (lVar4 == 0) goto LAB_044ba22c;
        if (*(int *)(lVar4 + 0x18) == 0) {
Meta_XR_ImmersiveDebugger_Manager_Watch<__Il2CppFullySharedGenericType>__get_NumberOfValues:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        plVar3 = *(long **)(lVar4 + 0x20);
        if (plVar3 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
LAB_044ba230:
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(plVar3);
          }
        }
        uVar9 = *(undefined8 *)PTR_DAT_0676b178;
        if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        plVar5 = (long *)FUN_05015c2c(uVar9,0);
        plVar7 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675f8d8,1);
        if (plVar7 == (long *)0x0) goto LAB_044ba22c;
        if ((plVar3 != (long *)0x0) &&
           (lVar4 = thunk_FUN_02d9d438(plVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
          uVar9 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar9,0);
        }
        if ((int)plVar7[3] == 0)
        goto 
        Meta_XR_ImmersiveDebugger_Manager_Watch<__Il2CppFullySharedGenericType>__get_NumberOfValues;
        plVar7[4] = (long)plVar3;
        thunk_FUN_02dd37b4(plVar7 + 4,plVar3);
        if (plVar5 == (long *)0x0) {
LAB_044ba22c:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar5 = (long *)(**(code **)(*plVar5 + 0x958))
                                   (plVar5,plVar7,*(undefined8 *)(*plVar5 + 0x960));
        if (plVar5 == (long *)0x0) goto LAB_044ba22c;
        uVar6 = (**(code **)(*plVar5 + 0x298))(plVar5,plVar3,*(undefined8 *)(*plVar5 + 0x2a0));
        if ((uVar6 & 1) != 0) {
          lVar4 = *(long *)(unaff_x24 + 0xe0);
          puVar8 = (undefined8 *)PTR_DAT_0676b180;
          goto LAB_044b9f84;
        }
      }
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    plVar3 = (long *)thunk_FUN_02d9d534();
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0(lVar4);
    }
    FUN_03e4f2c8(plVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  }
  else {
    lVar4 = *(long *)(unaff_x24 + 0xe0);
    puVar8 = (undefined8 *)PTR_DAT_0676b170;
LAB_044b9f84:
    uVar9 = *puVar8;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar9 = FUN_05015c2c(uVar9,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)puVar2);
    }
    plVar3 = (long *)FUN_05048158(uVar9,plVar3,0);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0(lVar4);
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0(lVar4);
    }
    if (plVar3 != (long *)0x0) {
      if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar3);
      }
    }
  }
  return plVar3;
}


