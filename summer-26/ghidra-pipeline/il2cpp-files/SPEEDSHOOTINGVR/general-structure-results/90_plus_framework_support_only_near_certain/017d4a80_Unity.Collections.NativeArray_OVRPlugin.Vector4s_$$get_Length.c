/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_Length
ENTRY_POINT: 017d4a80
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x017d4d18) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Length
               (ulong param_1,long param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bef0);
    FUN_00fdc2e4(PTR_DAT_0234bef8);
    *(undefined1 *)(unaff_x22 + 0xb73) = 1;
  }
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0103c244(lVar6);
  }
  lVar7 = *param_3;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar6) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_017d4b28;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_0103c348(param_3,lVar6,0);
LAB_017d4b28:
  puVar1 = PTR_DAT_0234bef0;
  plVar4 = (long *)(*(code *)*puVar3)(param_3,puVar3[1]);
  puVar2 = PTR_DAT_0234bef8;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  do {
    lVar6 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Dispose;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_0103c348(plVar4,*(long *)puVar2,0);
Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Dispose:
    uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 == 0) goto LAB_017d4cc4;
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244(lVar6);
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_017d4c10;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_0103c348(plVar4,lVar6,0);
LAB_017d4c10:
    uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    lVar6 = *(long *)(param_2 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar8 = *(uint *)(param_2 + 0x18);
    if (uVar8 == *(uint *)(lVar6 + 0x18)) {
      FUN_017d3600(param_2,uVar8 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
      uVar8 = *(uint *)(param_2 + 0x18);
      lVar6 = *(long *)(param_2 + 0x10);
      *(uint *)(param_2 + 0x18) = uVar8 + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
    }
    else {
      *(uint *)(param_2 + 0x18) = uVar8 + 1;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
    *puVar3 = uVar5;
    thunk_FUN_0106e12c(puVar3,uVar5);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto FUN_017d4ce0;
    }
  }
LAB_017d4cc4:
  puVar3 = (undefined8 *)FUN_0103c348(plVar4,*(long *)puVar1,0);
FUN_017d4ce0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


