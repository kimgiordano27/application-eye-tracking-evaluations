/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetNetSyncSessionArray
ENTRY_POINT: 06015f84
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionArray(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x21;
  long *plVar5;
  long *unaff_x23;
  long unaff_x25;
  undefined8 *unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  
  do {
    FUN_051a120c();
    do {
      uVar3 = (ulong)*(uint *)(unaff_x21 + 0x18);
      unaff_x28 = unaff_x28 + 1;
      if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x28) {
        do {
          unaff_x27 = unaff_x27 + 1;
          if ((int)*(uint *)(unaff_x25 + 0x18) <= (int)unaff_x27) {
            return;
          }
          if (*(uint *)(unaff_x25 + 0x18) <= unaff_x27) goto LAB_06015fd0;
          lVar1 = *(long *)(unaff_x25 + unaff_x27 * 8 + 0x20);
          if ((lVar1 == 0) || (unaff_x21 = FUN_03d18d8c(lVar1,*unaff_x26), unaff_x21 == 0))
          goto LAB_06015fd4;
        } while ((int)*(ulong *)(unaff_x21 + 0x18) < 1);
        unaff_x28 = 0;
        uVar3 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
      }
      if (uVar3 <= unaff_x28) {
LAB_06015fd0:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      plVar5 = *(long **)(unaff_x21 + unaff_x28 * 8 + 0x20);
    } while (plVar5 == (long *)0x0);
    lVar1 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06015f70;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar5,*unaff_x23,0);
LAB_06015f70:
    (*(code *)*puVar2)(plVar5,puVar2[1]);
    if (unaff_x19 == 0) {
LAB_06015fd4:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  } while( true );
}


