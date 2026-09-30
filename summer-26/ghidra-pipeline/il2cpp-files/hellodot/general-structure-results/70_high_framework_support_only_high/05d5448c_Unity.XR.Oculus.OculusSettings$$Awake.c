/*
FUNCTION_NAME: Unity.XR.Oculus.OculusSettings$$Awake
ENTRY_POINT: 05d5448c
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d5459c) */

void Unity_XR_Oculus_OculusSettings__Awake(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
code_r0x05d5448c:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto Unity_XR_Oculus_OculusSettings__IsEyeTrackingRequested;
LAB_05d54494:
  puVar2 = (undefined8 *)FUN_02ce0a7c();
  do {
    plVar3 = (long *)(*(code *)*puVar2)();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    bVar1 = *(byte *)(*unaff_x23 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018();
    }
    uVar4 = FUN_05ef2cf0(plVar3,0);
    FUN_05d5436c(uVar4,unaff_w20);
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05d54454;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_05d54454:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_02cea798();
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_05d5454c;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x19;
    param_3 = *unaff_x22;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_05d54494;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
Unity_XR_Oculus_OculusSettings__IsEyeTrackingRequested:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x05d5448c;
    }
    puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x21) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_05d54568;
    }
  }
LAB_05d5454c:
  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar3,*unaff_x21,0);
LAB_05d54568:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return;
}


