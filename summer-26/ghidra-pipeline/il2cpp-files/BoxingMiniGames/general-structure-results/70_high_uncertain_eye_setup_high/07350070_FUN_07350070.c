/*
FUNCTION_NAME: FUN_07350070
ENTRY_POINT: 07350070
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0735022c) */

void FUN_07350070(undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_07ef30bd & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4598);
                    /* try { // try from 073500ac to 074500cb has its CatchHandler @ 07350180 */
    FUN_03642964(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                );
    FUN_03642964(PTR_DAT_079ffc18);
    FUN_03642964(PTR_DAT_07a34120);
    DAT_07ef30bd = 1;
  }
  if ((param_4 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
                    /* try { // try from 073500e0 to 074500eb has its CatchHandler @ 0735017c */
    fVar8 = *(float *)(param_4 + 0xa0);
    fVar9 = *(float *)(param_4 + 0xa4);
    fVar7 = (float)FUN_0732095c(*(long *)(param_3 + 0x10),0);
                    /* try { // try from 073500f0 to 074500fb has its CatchHandler @ 07350178 */
    if (*(long *)(param_3 + 0x10) != 0) {
      FUN_0732095c(*(long *)(param_3 + 0x10),0);
                    /* try { // try from 07350108 to 07450133 has its CatchHandler @ 07350184 */
      if ((*(long *)(param_3 + 0x10) != 0) && (*(long *)(*(long *)(param_3 + 0x10) + 0x2e0) != 0)) {
        auVar10 = FUN_0734fc54(fVar8 - fVar7,fVar9 - param_2);
        if ((auVar10._8_8_ != 0) && ((auVar10._0_8_ & 0xffffffff) == 0xe)) {
          if (*(int *)(*(long *)
                        Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                      + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          plVar1 = (long *)FUN_073d75e0(param_4,auVar10._8_8_,*(undefined8 *)PTR_DAT_07a34120,0);
          if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          plVar1[7] = *(long *)(param_3 + 0x10);
          thunk_FUN_036b7ad0();
          plVar2 = *(long **)(param_3 + 0x10);
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          (**(code **)(*plVar2 + 0x188))(plVar2,plVar1,*(undefined8 *)(*plVar2 + 400));
          if (plVar1 != (long *)0x0) {
            lVar4 = *plVar1;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_079f4598) {
                  puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_073501fc;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_0367cd30(plVar1,*(long *)PTR_DAT_079f4598,0);
LAB_073501fc:
            (*(code *)*puVar3)(plVar1,puVar3[1]);
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


