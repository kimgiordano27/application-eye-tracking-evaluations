/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetHashCode
ENTRY_POINT: 017d4ff0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetHashCode(void)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  
  FUN_0103c244();
  plVar2 = (long *)thunk_FUN_0103ffe0();
  if (plVar2 == (long *)0x0) {
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244();
    }
    *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
    thunk_FUN_0106e12c();
    FUN_017d716c();
    return;
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_017d50e8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0103c348(plVar2,lVar5,0);
LAB_017d50e8:
  iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if (iVar1 == 0) {
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244();
    }
    *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
    thunk_FUN_0106e12c((undefined8 *)(unaff_x19 + 0x10));
    return;
  }
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  uVar4 = FUN_00fdc388(lVar5,iVar1);
  puVar3 = (undefined8 *)(unaff_x19 + 0x10);
  *puVar3 = uVar4;
  thunk_FUN_0106e12c(puVar3,uVar4);
  uVar4 = *puVar3;
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
        goto LAB_017d51f4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0103c348(plVar2,lVar5,5);
LAB_017d51f4:
  (*(code *)*puVar3)(plVar2,uVar4,0,puVar3[1]);
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}


