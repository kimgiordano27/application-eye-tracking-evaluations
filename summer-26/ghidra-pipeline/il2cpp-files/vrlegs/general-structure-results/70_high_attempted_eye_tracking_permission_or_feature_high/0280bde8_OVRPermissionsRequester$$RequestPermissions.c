/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 0280bde8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


undefined8 OVRPermissionsRequester__RequestPermissions(void)

{
  ushort uVar1;
  short sVar2;
  undefined1 in_CY;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_w8;
  long in_x9;
  long unaff_x19;
  uint uVar7;
  long *unaff_x21;
  long unaff_x22;
  uint uVar8;
  
  do {
    if ((bool)in_CY) {
LAB_0280c140:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar1 = *(ushort *)(in_x9 + (long)(int)in_w8 * 2 + 0x20);
    uVar7 = (uint)uVar1;
    uVar8 = (uint)uVar1;
    if (0x4e < uVar1) {
                    /* try { // try from 0280be30 to 0290be3f has its CatchHandler @ 0280be40 */
      if (uVar8 < 0x67) {
        if (uVar1 == 0x5b) {
          *(uint *)(unaff_x19 + 0x8c) = in_w8 + 1;
LAB_0280c08c:
          FUN_02804374();
          return 1;
        }
                    /* catch() { ... } // from try @ 0280bd94 with catch @ 0280be40
                       catch() { ... } // from try @ 0280be30 with catch @ 0280be40 */
        if (uVar1 == 0x5d) {
          *(uint *)(unaff_x19 + 0x8c) = in_w8 + 1;
          goto LAB_0280c08c;
        }
                    /* try { // try from 0280be44 to 0290be47 has its CatchHandler @ 0280be50 */
                    /* try { // try from 0280be48 to 0290be53 has its CatchHandler @ 0280bca0 */
        if (uVar7 == 0x66) {
          FUN_0280f538();
          return 1;
        }
switchD_0280be70_caseD_23:
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar4 = FUN_026b63d8(uVar1,0);
        if ((uVar4 & 1) != 0) {
          in_w8 = *(uint *)(unaff_x19 + 0x8c);
LAB_0280bedc:
          *(uint *)(unaff_x19 + 0x8c) = in_w8 + 1;
          goto LAB_0280bee0;
        }
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar4 = FUN_026b9420(uVar8,0);
        if ((uVar8 - 0x2d < 2) || ((uVar4 & 1) != 0)) {
          FUN_0280defc();
          return 1;
        }
      }
      else {
        if (0x74 < uVar8) {
          if (uVar1 == 0x75) {
            FUN_0280f93c();
            return 1;
          }
          if (uVar1 == 0x7b) {
            *(uint *)(unaff_x19 + 0x8c) = in_w8 + 1;
            goto LAB_0280c08c;
          }
          goto switchD_0280be70_caseD_23;
        }
        if (uVar1 != 0x6e) {
          if (uVar1 == 0x74) {
            FUN_0280f460();
            return 1;
          }
          goto switchD_0280be70_caseD_23;
        }
        if (*(int *)(unaff_x19 + 0x88) <= (int)(in_w8 + 1)) {
          uVar4 = FUN_0280ba8c();
          if ((uVar4 & 1) == 0) {
            *(int *)(unaff_x19 + 0x8c) = *(int *)(unaff_x19 + 0x8c) + 1;
            uVar5 = FUN_02806920();
            goto LAB_0280c154;
          }
          in_x9 = *(long *)(unaff_x19 + 0x80);
          if (in_x9 == 0) goto LAB_0280c144;
          in_w8 = *(uint *)(unaff_x19 + 0x8c);
        }
        if (*(uint *)(in_x9 + 0x18) <= in_w8 + 1) goto LAB_0280c140;
        sVar2 = *(short *)(in_x9 + (long)(int)(in_w8 + 1) * 2 + 0x20);
        if (sVar2 == 0x65) {
          FUN_0280f610();
          return 1;
        }
        if (sVar2 == 0x75) {
          FUN_0280ea24();
          return 1;
        }
        FUN_018748a8(in_x9);
        FUN_019a7458(in_x9,(long)(int)in_w8);
      }
      uVar5 = FUN_0280d99c();
LAB_0280c154:
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfe128);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar6);
    }
    if (0x20 < uVar7) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0280be44 with catch @ 0280be50
                        */
      if (uVar1 < 0x30) {
        if (uVar7 - 0x22 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x0280be70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)((ulong)*(byte *)(unaff_x22 + (ulong)(uVar7 - 0x22)) * 4 + 0x280beb4))()
          ;
          return uVar5;
        }
      }
      else {
        if (uVar1 == 0x49) {
          FUN_0280e008();
          return 1;
        }
        if (uVar7 == 0x4e) {
          FUN_0280e084();
          return 1;
        }
      }
      goto switchD_0280be70_caseD_23;
    }
    if (uVar1 < 10) {
      if (uVar1 == 0) {
        if (*(uint *)(unaff_x19 + 0x88) == in_w8) {
          iVar3 = OVRPassthroughLayer_InterpolatedColorLutHandler__get_LutTarget();
          if (iVar3 == 0) {
            return 0;
          }
          goto LAB_0280bee0;
        }
      }
      else if (uVar1 != 9) goto switchD_0280be70_caseD_23;
      goto LAB_0280bedc;
    }
    if (uVar1 == 10) {
      *(uint *)(unaff_x19 + 0x8c) = in_w8 + 1;
      *(uint *)(unaff_x19 + 0x90) = in_w8 + 1;
      *(int *)(unaff_x19 + 0x94) = *(int *)(unaff_x19 + 0x94) + 1;
    }
    else {
      if (uVar1 != 0xd) {
        if (uVar1 == 0x20) goto LAB_0280bedc;
        goto switchD_0280be70_caseD_23;
      }
      FUN_0280da6c();
    }
LAB_0280bee0:
    in_x9 = *(long *)(unaff_x19 + 0x80);
    if (in_x9 == 0) {
LAB_0280c144:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_w8 = *(uint *)(unaff_x19 + 0x8c);
    in_CY = *(uint *)(in_x9 + 0x18) <= in_w8;
  } while( true );
}


