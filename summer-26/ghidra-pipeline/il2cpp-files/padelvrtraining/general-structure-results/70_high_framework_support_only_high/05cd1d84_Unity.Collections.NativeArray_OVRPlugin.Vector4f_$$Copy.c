/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 05cd1d84
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd20bc) */
/* WARNING: Removing unreachable block (ram,0x05cd212c) */
/* WARNING: Removing unreachable block (ram,0x05cd2134) */
/* WARNING: Removing unreachable block (ram,0x05cd2140) */
/* WARNING: Removing unreachable block (ram,0x05cd214c) */
/* WARNING: Removing unreachable block (ram,0x05cd20d8) */
/* WARNING: Removing unreachable block (ram,0x05cd20e4) */
/* WARNING: Removing unreachable block (ram,0x05cd1fd4) */
/* WARNING: Removing unreachable block (ram,0x05cd1fe4) */
/* WARNING: Removing unreachable block (ram,0x05cd2170) */
/* WARNING: Removing unreachable block (ram,0x05cd1fec) */
/* WARNING: Removing unreachable block (ram,0x05cd2004) */
/* WARNING: Removing unreachable block (ram,0x05cd200c) */
/* WARNING: Removing unreachable block (ram,0x05cd203c) */
/* WARNING: Removing unreachable block (ram,0x05cd2018) */
/* WARNING: Removing unreachable block (ram,0x05cd2024) */
/* WARNING: Removing unreachable block (ram,0x05cd204c) */
/* WARNING: Removing unreachable block (ram,0x05cd2058) */
/* WARNING: Removing unreachable block (ram,0x05cd2144) */
/* WARNING: Removing unreachable block (ram,0x05cd2168) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ushort uVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar10;
  long lVar11;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x05cd1d84:
  if (!(bool)in_ZR) goto LAB_05cd1d70;
LAB_05cd1d88:
  puVar3 = (undefined8 *)FUN_03d8f370();
  do {
    uVar4 = (*(code *)*puVar3)();
    if (*(long *)(unaff_x20 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(uVar4,uVar4);
    }
    lVar5 = FUN_05cd0144();
    if (lVar5 == 0) {
      iVar1 = *(int *)(unaff_x20 + 0x14c);
      *(int *)(unaff_x20 + 0x14c) = iVar1 + 1;
      if (iVar1 == 0) {
        plVar7 = *(long **)(unaff_x20 + 0x78);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar5 = *plVar7;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x29) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
              goto LAB_05cd1f4c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*unaff_x29,3);
LAB_05cd1f4c:
        (*(code *)*puVar3)(plVar7,puVar3[1]);
      }
    }
    else {
      *(undefined4 *)(unaff_x20 + 0x14c) = 0;
      lVar10 = *(long *)(unaff_x20 + 0x78);
      lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03d8f26c(lVar11);
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar6 = thunk_FUN_03d2ee44(lVar10,lVar11);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4(lVar10,lVar11);
      }
      lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
      uVar2 = *(ushort *)(lVar11 + 0x135);
      lVar6 = lVar11;
      if ((uVar2 & 1) == 0) {
        lVar6 = FUN_03d8f26c(lVar11);
        lVar11 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
        uVar2 = *(ushort *)(lVar11 + 0x135);
      }
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_03d8f26c(lVar11);
      }
      plVar7 = (long *)thunk_FUN_03d2ee44(lVar10,lVar11);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d8e4(lVar10,lVar11);
      }
      lVar11 = *plVar7;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05cd1f28;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar7,lVar6,0);
LAB_05cd1f28:
      (*(code *)*puVar3)(plVar7,lVar5,puVar3[1]);
    }
    lVar5 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05cd1d2c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370();
LAB_05cd1d2c:
    uVar8 = (*(code *)*puVar3)();
    if ((uVar8 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_05cd1fcc;
      lVar5 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_05cd1fa4;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_03d8f26c(param_3);
    }
    param_1 = *unaff_x22;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_05cd1d88;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_05cd1d70:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x05cd1d84;
    }
    puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_05cd1fc0;
    }
  }
LAB_05cd1fa4:
  puVar3 = (undefined8 *)FUN_03d8f370();
LAB_05cd1fc0:
  (*(code *)*puVar3)();
LAB_05cd1fcc:
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  return;
}


