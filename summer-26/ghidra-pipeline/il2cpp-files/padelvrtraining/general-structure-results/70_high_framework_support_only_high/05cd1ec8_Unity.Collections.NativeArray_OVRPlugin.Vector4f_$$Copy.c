/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 05cd1ec8
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

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x05cd1ec8:
  do {
    plVar3 = (long *)thunk_FUN_03d2ee44(unaff_x24,unaff_x27);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d8e4(unaff_x24,unaff_x27);
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == unaff_x25) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05cd1f28;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370(plVar3,unaff_x25,0);
LAB_05cd1f28:
    (*(code *)*puVar4)(plVar3,unaff_x23,puVar4[1]);
LAB_05cd1ce0:
    lVar6 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05cd1d2c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370();
LAB_05cd1d2c:
    uVar7 = (*(code *)*puVar4)();
    if ((uVar7 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_05cd1fcc;
      lVar6 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_05cd1fa4;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_05cd1f8c;
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c(lVar6);
    }
    lVar5 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05cd1da4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03d8f370();
LAB_05cd1da4:
    uVar2 = (*(code *)*puVar4)();
    if (*(long *)(unaff_x20 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(uVar2,uVar2);
    }
    unaff_x23 = FUN_05cd0144();
    if (unaff_x23 == 0) {
      iVar1 = *(int *)(unaff_x20 + 0x14c);
      *(int *)(unaff_x20 + 0x14c) = iVar1 + 1;
      if (iVar1 == 0) {
        plVar3 = *(long **)(unaff_x20 + 0x78);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x29) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
              goto LAB_05cd1f4c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03d8f370(plVar3,*unaff_x29,3);
LAB_05cd1f4c:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
      }
      goto LAB_05cd1ce0;
    }
    *(undefined4 *)(unaff_x20 + 0x14c) = 0;
    unaff_x24 = *(long *)(unaff_x20 + 0x78);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c(lVar6);
    }
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar5 = thunk_FUN_03d2ee44(unaff_x24,lVar6);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d8e4(unaff_x24,lVar6);
    }
    unaff_x25 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
    if ((*(ushort *)(unaff_x25 + 0x135) & 1) != 0) goto LAB_05cd1eb4;
    unaff_x25 = FUN_03d8f26c(unaff_x25);
    unaff_x27 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
  } while ((*(ushort *)(unaff_x27 + 0x135) & 1) != 0);
  goto LAB_05cd1ebc;
LAB_05cd1eb4:
  unaff_x27 = unaff_x25;
  if ((*(ushort *)(unaff_x25 + 0x135) & 1) == 0) {
LAB_05cd1ebc:
    unaff_x27 = FUN_03d8f26c(unaff_x27);
  }
  goto code_r0x05cd1ec8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_05cd1f8c:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_05cd1fc0;
    }
  }
LAB_05cd1fa4:
  puVar4 = (undefined8 *)FUN_03d8f370();
LAB_05cd1fc0:
  (*(code *)*puVar4)();
LAB_05cd1fcc:
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  return;
}


