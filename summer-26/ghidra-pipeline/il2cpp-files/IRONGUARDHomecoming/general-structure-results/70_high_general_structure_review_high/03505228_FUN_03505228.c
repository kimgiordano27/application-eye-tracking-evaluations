/*
FUNCTION_NAME: FUN_03505228
ENTRY_POINT: 03505228
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4
*/


int FUN_03505228(ushort *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  uVar8 = 0;
  lVar1 = (long)param_2;
  puVar4 = param_1;
  while( true ) {
    if (param_1 + lVar1 <= puVar4) break;
    puVar5 = puVar4 + 1;
    uVar3 = *puVar4;
    puVar4 = puVar5;
    if (uVar3 < 0x21) {
      param_2 = param_2 + -1;
    }
    else if (uVar3 == 0x3d) {
      param_2 = param_2 + -1;
      uVar8 = uVar8 + 1;
    }
  }
  if (uVar8 < 3) {
    iVar2 = param_2 + 3;
    if (-1 < param_2) {
      iVar2 = param_2;
    }
    return *(int *)(&DAT_00d4a1ac + (long)(int)uVar8 * 4) + (iVar2 >> 2) * 3;
  }
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
  uVar6 = thunk_FUN_01f117cc();
  uVar7 = thunk_FUN_01efb3a4(
                            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<GUIStyleState>__
                            );
  FUN_03553fd0(uVar6,uVar7,0);
  uVar7 = thunk_FUN_01efb3a4(
                            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<ImagePosition>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar7);
}


