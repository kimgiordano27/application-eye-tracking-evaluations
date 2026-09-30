/*
FUNCTION_NAME: OVRVirtualKeyboard.HandInputSource.<>c__DisplayClass6_0$$<UpdateInput>b__1
ENTRY_POINT: 0538853c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void OVRVirtualKeyboard_HandInputSource_<>c__DisplayClass6_0__<UpdateInput>b__1(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  long *plVar11;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  puVar4 = (undefined8 *)FUN_02f421d0();
  (*(code *)*puVar4)();
  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_05388758;
  uVar5 = FUN_06098ae0(*(long *)(unaff_x19 + 0x28),0);
  if ((uVar5 & 1) == 0) {
    plVar10 = *(long **)(unaff_x19 + 0x38);
    if (plVar10 == (long *)0x0) goto LAB_05388758;
    lVar8 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_053885cc;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar10,*unaff_x22,3);
LAB_053885cc:
    iVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    iVar1 = *(int *)(unaff_x19 + 0x20);
    if ((DAT_06bbd57f & 1) == 0) {
      FUN_02f08768(UnityEngine_UIElements_IUxmlSerializedDataDeserializeReference_TypeInfo);
      DAT_06bbd57f = 1;
    }
    if (iVar3 < (**(int **)(*(long *)
                             UnityEngine_UIElements_IUxmlSerializedDataDeserializeReference_TypeInfo
                           + 0xb8) * iVar1) / 1000) {
      return;
    }
    if ((char)(*(int **)(*(long *)
                          UnityEngine_UIElements_IUxmlSerializedDataDeserializeReference_TypeInfo +
                        0xb8))[1] != '\0') {
      plVar10 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,1);
      plVar11 = *(long **)(unaff_x19 + 0x38);
      if (plVar11 == (long *)0x0) goto LAB_05388758;
      lVar8 = *plVar11;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_053886b0;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(plVar11,*unaff_x22,3);
LAB_053886b0:
      in_stack_00000008._4_4_ = (*(code *)*puVar4)(plVar11,puVar4[1]);
      lVar8 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),(long)&stack0x00000008 + 4
                                );
      if (plVar10 == (long *)0x0) goto LAB_05388758;
      if ((lVar8 != 0) &&
         (lVar6 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
        uVar7 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar7,0);
      }
      puVar2 = PTR_DAT_067c8f48;
      if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      plVar10[4] = lVar8;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_060a97a4(*(undefined8 *)OVR_OpenVR_IVRChaperoneSetup_TypeInfo,plVar10,0);
    }
    if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_05388758:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_060989ec(*(long *)(unaff_x19 + 0x28),0);
  }
  return;
}


