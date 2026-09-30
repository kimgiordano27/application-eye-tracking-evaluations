/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 04f8ffc0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  long in_stack_00000028;
  
  if ((DAT_066c9db4 & 1) == 0) {
    FUN_02b3c81c(System_Runtime_Remoting_IRemotingTypeInfo_var);
    DAT_066c9db4 = 1;
  }
  puVar1 = System_Runtime_Remoting_IRemotingTypeInfo_var;
  in_stack_00000028 = 0;
  iVar7 = 0;
  _uStack0000000000000008 = 0;
  _uStack0000000000000010 = 0;
  in_stack_00000020 = 0;
  _uStack0000000000000018 = 0;
  do {
    uVar2 = FUN_04f8f978(param_1,iVar7,&stack0x00000028);
    if ((uVar2 & 1) != 0) {
      if (in_stack_00000028 == 0) goto LAB_04f90168;
      lVar3 = FUN_05c89410(in_stack_00000028,0);
      if (*(char *)(param_1 + 0x80) != '\0') {
        plVar8 = *(long **)(param_1 + 0x38);
        if (plVar8 == (long *)0x0) goto LAB_04f90168;
        lVar5 = *plVar8;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
              goto LAB_04f90094;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_02b7654c(plVar8,*(long *)puVar1,9);
LAB_04f90094:
        uVar2 = (*(code *)*puVar4)(plVar8,iVar7,&stack0x00000008,puVar4[1]);
        if ((uVar2 & 1) != 0) {
          if (in_stack_00000028 == 0) goto LAB_04f90168;
          FUN_05d1d5ec(uStack0000000000000008,uStack000000000000000c,uStack0000000000000010,
                       in_stack_00000028,0);
          if ((in_stack_00000028 == 0) ||
             (FUN_05d1d6c0(uStack0000000000000014,uStack0000000000000018,uStack000000000000001c,
                           in_stack_00000020,in_stack_00000028,0), lVar3 == 0)) goto LAB_04f90168;
          uVar2 = FUN_05c8cbec(lVar3,0);
          if ((uVar2 & 1) == 0) {
            FUN_05c8cb28(lVar3,1,0);
            if (in_stack_00000028 == 0) goto LAB_04f90168;
            FUN_05d1d8fc(in_stack_00000028,0);
          }
          goto LAB_04f90148;
        }
      }
      if (lVar3 == 0) {
LAB_04f90168:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar2 = FUN_05c8cbec(lVar3,0);
      if ((uVar2 & 1) != 0) {
        if (in_stack_00000028 == 0) goto LAB_04f90168;
        FUN_05d1d794(in_stack_00000028,0);
        FUN_05c8cb28(lVar3,0,0);
      }
    }
LAB_04f90148:
    iVar7 = iVar7 + 1;
    if (iVar7 == 0x1a) {
      return;
    }
  } while( true );
}


