/*
FUNCTION_NAME: Unity.VisualScripting.Distance<Vector4>$$set_b
ENTRY_POINT: 05b57a3c
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


void Unity_VisualScripting_Distance<Vector4>__set_b(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *unaff_x26;
  long unaff_x27;
  long in_stack_00000018;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03775678(lVar6);
  }
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_037787d0(param_2,lVar6);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(param_2,lVar6);
    }
  }
  *(long *)(unaff_x19 + 0x30) = lVar1;
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03775678(lVar6);
  }
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_037787d0(param_2,lVar6);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(param_2,lVar6);
    }
  }
  thunk_FUN_037aeb94((long *)(unaff_x19 + 0x30),lVar1);
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x10),0);
  }
  else {
    FUN_05b5734c();
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x188);
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar4 = FUN_062519f8(uVar4,0);
    if (in_stack_00000018 == 0) goto LAB_05b57c78;
    lVar6 = FUN_06147170(in_stack_00000018,*(undefined8 *)PTR_DAT_07d9b408,uVar4,0);
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03775678(lVar1);
    }
    if (lVar6 == 0) {
      FUN_06263e4c(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar2 = (long *)thunk_FUN_037787d0(lVar6,lVar1);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(lVar6,lVar1);
    }
    if (0 < (int)plVar2[3]) {
      uVar5 = 0;
      plVar7 = plVar2;
      do {
        plVar7 = plVar7 + 4;
        uVar3 = (ulong)*(uint *)(plVar2 + 3);
        if (uVar3 <= uVar5) {
Unity_VisualScripting_Distance<Vector4>___ctor:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        if (*plVar7 == 0) {
          FUN_06263e4c(0x11,0);
          uVar3 = (ulong)*(uint *)(plVar2 + 3);
        }
        if (uVar3 <= uVar5) goto Unity_VisualScripting_Distance<Vector4>___ctor;
        System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__System_Collections_IDictionary_GetEnumerator
                  ();
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)plVar2[3]);
    }
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar6 = FUN_061df528(0);
  if (lVar6 != 0) {
    FUN_058ba65c();
    return;
  }
LAB_05b57c78:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


