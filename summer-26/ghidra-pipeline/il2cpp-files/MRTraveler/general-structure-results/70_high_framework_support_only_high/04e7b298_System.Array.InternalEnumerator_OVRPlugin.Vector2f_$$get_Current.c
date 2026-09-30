/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$get_Current
ENTRY_POINT: 04e7b298
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04e7b670) */
/* WARNING: Removing unreachable block (ram,0x04e7b724) */

void System_Array_InternalEnumerator<OVRPlugin_Vector2f>__get_Current
               (undefined8 param_1,long param_2,long *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long unaff_x27;
  long unaff_x29;
  undefined1 auVar17 [16];
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  if ((DAT_094126b7 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e83fb0);
    FUN_03c8f898(PTR_DAT_08e6a288);
    FUN_03c8f898(PTR_DAT_08e6a290);
    FUN_03c8f898(PTR_DAT_08e6baa0);
    DAT_094126b7 = 1;
  }
  *(undefined4 *)(unaff_x29 + -0xc) = 0;
  puVar4 = PTR_DAT_08e83fb0;
  uVar1 = *(uint *)(param_2 + 0x24);
  uVar5 = FUN_077e9c24((ulong)uVar1,0);
  puVar3 = PTR_DAT_08e6baa0;
  uVar15 = (ulong)uVar5;
  if ((int)uVar5 < 0x33) {
    uVar15 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
    if (uVar5 == 0) {
      puVar16 = (undefined1 *)0x0;
    }
    else {
      register0x00000008 = (BADSPACEBASE *)(&stack0x00000000 + -(uVar15 + 0xf & 0xfffffffffffffff0))
      ;
      puVar16 = (undefined1 *)register0x00000008;
    }
    memset(puVar16,0,uVar15);
    lVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar4);
    FUN_077e9ab0(lVar7,puVar16,uVar5,0);
    if (uVar5 == 0) {
      puVar16 = (undefined1 *)0x0;
    }
    else {
      puVar16 = (undefined1 *)((long)register0x00000008 + -(uVar15 + 0xf & 0xfffffffffffffff0));
    }
    memset(puVar16,0,uVar15);
    lVar8 = thunk_FUN_03cf5234(*(undefined8 *)puVar4);
    FUN_077e9ab0(lVar8,puVar16,uVar5,0);
  }
  else {
    uVar6 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6baa0,uVar15);
    lVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar4);
    FUN_077e9ae8(lVar7,uVar6,uVar15,0);
    uVar6 = FUN_03c8f97c(*(undefined8 *)puVar3,uVar15);
    lVar8 = thunk_FUN_03cf5234(*(undefined8 *)puVar4);
    FUN_077e9ae8(lVar8,uVar6,uVar15,0);
  }
  if (param_3 != (long *)0x0) {
    lVar12 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03cf1244(lVar12);
    }
    lVar13 = *param_3;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar12) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04e7b488;
        }
        uVar15 = uVar15 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348(param_3,lVar12,0);
LAB_04e7b488:
    puVar3 = PTR_DAT_08e6a288;
    plVar10 = (long *)(*(code *)*puVar9)(param_3,puVar9[1]);
    puVar4 = PTR_DAT_08e6a290;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar12 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04e7b4f8;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)puVar4,0);
LAB_04e7b4f8:
      uVar15 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar15 & 1) == 0) {
        if (plVar10 == (long *)0x0) goto LAB_04e7b664;
        lVar8 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar15 == 0) goto LAB_04e7b63c;
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current;
      }
      lVar12 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_03cf1244(lVar12);
      }
      lVar13 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04e7b570;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar10,lVar12,0);
LAB_04e7b570:
      auVar17 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      uVar15 = FUN_04e7b7f8(param_2,auVar17._0_8_,auVar17._8_8_,unaff_x29 + -0xc,
                            *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1e0));
      iVar2 = *(int *)(unaff_x29 + -0xc);
      if ((uVar15 & 1) == 0) {
        if (iVar2 < (int)uVar1) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar15 = FUN_077e9ba0(lVar8,iVar2,0);
          if ((uVar15 & 1) == 0) {
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            FUN_077e9b24(lVar7,iVar2,0);
          }
        }
      }
      else {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_077e9b24(lVar8,iVar2,0);
      }
    } while( true );
  }
LAB_04e7b710:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar14 = piVar14 + 4;
    if (uVar15 == 0) break;
System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current:
    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
      puVar9 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_04e7b658;
    }
  }
LAB_04e7b63c:
  puVar9 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)puVar3,0);
LAB_04e7b658:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_04e7b664:
  if (0 < (int)uVar1) {
    if (lVar7 == 0) goto LAB_04e7b710;
    uVar15 = 0;
    lVar8 = 0x28;
    do {
      uVar11 = FUN_077e9ba0(lVar7,uVar15 & 0xffffffff,0);
      if ((uVar11 & 1) != 0) {
        lVar12 = *(long *)(param_2 + 0x18);
        if (lVar12 == 0) goto LAB_04e7b710;
        if (*(uint *)(lVar12 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        FUN_04e77a20(param_2,*(undefined8 *)(lVar12 + lVar8),((undefined8 *)(lVar12 + lVar8))[1],
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x148));
      }
      uVar15 = uVar15 + 1;
      lVar8 = lVar8 + 0x18;
    } while (uVar1 != uVar15);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


