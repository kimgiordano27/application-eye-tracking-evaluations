/*
FUNCTION_NAME: Unity.VisualScripting.Distance<Vector4>$$get_a
ENTRY_POINT: 05b57a24
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_Distance<Vector4>__get_a(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *unaff_x26;
  long unaff_x27;
  long in_stack_00000018;
  
  lVar1 = FUN_06147170();
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678(lVar7);
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_037787d0(lVar1,lVar7);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(lVar1,lVar7);
    }
  }
  *(long *)(unaff_x19 + 0x30) = lVar2;
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678(lVar7);
  }
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = thunk_FUN_037787d0(lVar1,lVar7);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(lVar1,lVar7);
    }
  }
  thunk_FUN_037aeb94((long *)(unaff_x19 + 0x30),lVar2);
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x10),0);
  }
  else {
    FUN_05b5734c();
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x188);
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar5 = FUN_062519f8(uVar5,0);
    if (in_stack_00000018 == 0) goto LAB_05b57c78;
    lVar1 = FUN_06147170(in_stack_00000018,*(undefined8 *)PTR_DAT_07d9b408,uVar5,0);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03775678(lVar7);
    }
    if (lVar1 == 0) {
      FUN_06263e4c(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar3 = (long *)thunk_FUN_037787d0(lVar1,lVar7);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(lVar1,lVar7);
    }
    if (0 < (int)plVar3[3]) {
      uVar6 = 0;
      plVar8 = plVar3;
      do {
        plVar8 = plVar8 + 4;
        uVar4 = (ulong)*(uint *)(plVar3 + 3);
        if (uVar4 <= uVar6) {
Unity_VisualScripting_Distance<Vector4>___ctor:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        if (*plVar8 == 0) {
          FUN_06263e4c(0x11,0);
          uVar4 = (ulong)*(uint *)(plVar3 + 3);
        }
        if (uVar4 <= uVar6) goto Unity_VisualScripting_Distance<Vector4>___ctor;
        System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__System_Collections_IDictionary_GetEnumerator
                  ();
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)plVar3[3]);
    }
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar1 = FUN_061df528(0);
  if (lVar1 != 0) {
    FUN_058ba65c();
    return;
  }
LAB_05b57c78:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


