/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetHeadPoseModifier
ENTRY_POINT: 0569e808
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_29_0__ovrp_GetHeadPoseModifier(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *in_x10;
  long *unaff_x19;
  long unaff_x21;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  
code_r0x0569e808:
  if (!(bool)in_ZR) goto LAB_0569e7f4;
LAB_0569e80c:
  puVar2 = (undefined8 *)FUN_02dd004c(unaff_x23,param_3,0);
  do {
    (*(code *)*puVar2)(unaff_x23,puVar2[1]);
    do {
      if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(unaff_x22);
      }
      unaff_x24 = unaff_x24 + 1;
      if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
        lVar3 = FUN_054a62f8();
        if (lVar3 == 0) {
LAB_0569e8e8:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
          uVar5 = 0;
          uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
          do {
            if (uVar4 <= uVar5) {
LAB_0569e8ec:
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            FUN_0569e6d8(*(undefined8 *)(lVar3 + 0x20 + uVar5 * 8));
            uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)(int)*(uint *)(lVar3 + 0x18));
        }
        return;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_x24) goto LAB_0569e8ec;
      uVar6 = *(undefined8 *)(unaff_x21 + unaff_x24 * 8 + 0x20);
      plVar1 = (long *)FUN_0538828c(0);
      if (plVar1 == (long *)0x0) goto LAB_0569e8e8;
      lVar3 = (**(code **)(*plVar1 + 600))(plVar1,uVar6,*(undefined8 *)(*plVar1 + 0x260));
      if ((lVar3 == 0) || (unaff_x19 == (long *)0x0)) goto LAB_0569e8e8;
      (**(code **)(*unaff_x19 + 0x388))();
      unaff_x23 = (long *)FUN_054a7ab8(uVar6,0);
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_054af9c4();
      unaff_x22 = 0;
    } while (unaff_x23 == (long *)0x0);
    param_1 = *unaff_x23;
    param_3 = *unaff_x25;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_0569e80c;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0569e7f4:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x0569e808;
    }
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
}


