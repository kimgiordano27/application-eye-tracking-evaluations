/*
FUNCTION_NAME: OVR.OpenVR.OpenVRInterop$$IsHmdPresent
ENTRY_POINT: 019e29a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_OpenVRInterop__IsHmdPresent(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined *puVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long unaff_x19;
  byte unaff_w20;
  long *plVar14;
  long unaff_x23;
  undefined8 *puVar15;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long in_stack_00000008;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  puVar15 = *(undefined8 **)(unaff_x23 + 0x8a0);
  pcVar7 = (char *)thunk_FUN_00d32ed4();
  puVar6 = Method_System_Collections_Generic_Dictionary_Enumerator<MRUKAnchor,_GameObject>_Dispose__
  ;
  if (*pcVar7 == '\0') {
    lVar8 = *(long *)Method_Sirenix_Serialization_Serializer<char>__ctor__;
  }
  else {
    FUN_01347408();
    uStack0000000000000018 = uStack000000000000001c;
    lVar8 = FUN_017841b4(&stack0x00000018,*(undefined8 *)puVar6,0);
  }
  plVar14 = *(long **)(unaff_x19 + 0x40);
  plVar9 = (long *)FUN_00da4fb8(*puVar15,5);
  uVar10 = thunk_FUN_00d61fa0(*unaff_x26,(long)&stack0x00000018 + 4);
  lVar11 = FUN_015f6780(*unaff_x25,uVar10,0);
  if (plVar9 == (long *)0x0) goto LAB_019e2c14;
  if ((lVar11 != 0) &&
     (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0)) {
LAB_019e2c1c:
    uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,0);
  }
  uVar13 = *(uint *)(plVar9 + 3);
  if (uVar13 != 0) {
    plVar9[4] = lVar11;
    if (in_stack_00000008 != 0) {
      lVar11 = thunk_FUN_00d6225c(in_stack_00000008,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar11 == 0) goto LAB_019e2c1c;
      uVar13 = *(uint *)(plVar9 + 3);
    }
    puVar6 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
    if (1 < uVar13) {
      plVar9[5] = in_stack_00000008;
      lVar11 = *(long *)puVar6;
      if (lVar11 != 0) {
        lVar11 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar11 == 0) goto LAB_019e2c1c;
        uVar13 = *(uint *)(plVar9 + 3);
      }
      if (2 < uVar13) {
        plVar9[6] = *(long *)puVar6;
        if (lVar8 != 0) {
          lVar11 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar11 == 0) goto LAB_019e2c1c;
          uVar13 = *(uint *)(plVar9 + 3);
        }
        puVar6 = StringLiteral_12935;
        if (3 < uVar13) {
          plVar9[7] = lVar8;
          lVar8 = *(long *)puVar6;
          if (lVar8 != 0) {
            lVar8 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar8 == 0) goto LAB_019e2c1c;
            uVar13 = *(uint *)(plVar9 + 3);
          }
          if (4 < uVar13) {
            plVar9[8] = *(long *)puVar6;
            uVar10 = FUN_01600844(plVar9,0);
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x558))(plVar14,uVar10,*(undefined8 *)(*plVar14 + 0x560));
              bVar5 = unaff_w20 & 1;
              if (bVar5 != *(byte *)(unaff_x19 + 0x60)) {
                if (bVar5 == 0) {
                  puVar1 = (undefined4 *)(unaff_x19 + 0x20);
                  puVar2 = (undefined4 *)(unaff_x19 + 0x24);
                  puVar3 = (undefined4 *)(unaff_x19 + 0x28);
                  puVar4 = (undefined4 *)(unaff_x19 + 0x2c);
                }
                else {
                  puVar1 = (undefined4 *)(unaff_x19 + 0x30);
                  puVar2 = (undefined4 *)(unaff_x19 + 0x34);
                  puVar3 = (undefined4 *)(unaff_x19 + 0x38);
                  puVar4 = (undefined4 *)(unaff_x19 + 0x3c);
                }
                if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_019e2c14;
                FUN_0267d974(*puVar1,*puVar2,*puVar3,*puVar4,*(long *)(unaff_x19 + 0x58),0);
                *(byte *)(unaff_x19 + 0x60) = bVar5;
              }
              return;
            }
LAB_019e2c14:
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


