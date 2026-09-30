/*
FUNCTION_NAME: OVRPlugin$$GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 0368d6b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


bool OVRPlugin__GetLocalTrackingSpaceRecenterCount(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int iVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_44__);
  *(undefined1 *)(unaff_x22 + 0xeb3) = 1;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uVar13 = unaff_x21[1];
  uVar8 = *unaff_x21;
  unaff_x19[2] = unaff_x21[2];
  unaff_x19[1] = uVar13;
  *unaff_x19 = uVar8;
  plVar5 = (long *)FUN_0368d438();
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__653_44__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_43__;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_42__;
  if (plVar5 == (long *)0x0) {
LAB_0368d8a8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar12 = 0;
  do {
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0368d75c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_0368d75c:
    iVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar4 <= iVar12) {
LAB_0368d880:
      return iVar4 <= iVar12;
    }
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0368d7c0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_0368d7c0:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,iVar12,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0368d8a8;
      uVar8 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0);
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0368d838;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_0368d838:
      uVar10 = (*(code *)*puVar6)(plVar7,uVar8,&stack0x00000018,puVar6[1]);
      if ((uVar10 & 1) != 0) {
        uVar10 = FUN_03666924();
        if ((uVar10 & 1) == 0) goto LAB_0368d880;
      }
    }
    iVar12 = iVar12 + 1;
  } while( true );
}


