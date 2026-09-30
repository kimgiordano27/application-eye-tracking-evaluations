/*
FUNCTION_NAME: Unity.Transforms.LocalToWorldSystem.__codegen__OnUpdate_00000023$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0673fa50
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Transforms_LocalToWorldSystem___codegen__OnUpdate_00000023_PostfixBurstDelegate__Invoke
               (long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  float *pfVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  float fVar9;
  float fVar10;
  float fVar11;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0xca0));
  FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<ReferencedUnityObjects>_TypeInfo);
  FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<RelevantGraphSurface>_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0x3ef) = 1;
  puVar1 = Unity_Entities_TypeManager_SharedTypeIndex<RTSCamera>_TypeInfo;
  if ((*(long *)(unaff_x20 + 0x1e8) != 0) &&
     (plVar6 = *(long **)(*(long *)(unaff_x20 + 0x1e8) + 0x38), plVar6 != (long *)0x0)) {
    iVar5 = *(int *)(unaff_x22 + 0x2a0);
    iVar2 = *(int *)(unaff_x22 + 0x2a4);
    fVar9 = (float)(**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
    fVar9 = exp2f(fVar9);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (((*(long *)(unaff_x20 + 0x130) != 0) && (unaff_x21 != 0)) &&
       (FUN_069168e8(), unaff_x19 != 0)) {
      thunk_FUN_068d0fac(1.0 / (float)(iVar2 * iVar2),1.0 / (float)iVar2,(float)iVar2 + -1.0,fVar9);
      if ((*(long *)(unaff_x20 + 0x1e0) != 0) &&
         (plVar6 = *(long **)(*(long *)(unaff_x20 + 0x1e0) + 0x38), plVar6 != (long *)0x0)) {
        (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
        FUN_068d0064();
        if (*(long *)(unaff_x20 + 0x1e0) != 0) {
          uVar7 = FUN_06734654();
          if ((uVar7 & 1) == 0) {
            if (DAT_0738e665 == '\0') {
              FUN_02fe925c(PTR_DAT_06f6dbd8);
              DAT_0738e665 = '\x01';
            }
            pfVar8 = *(float **)(*(long *)PTR_DAT_06f6dbd8 + 0xb8);
            fVar9 = *pfVar8;
            fVar10 = pfVar8[1];
            fVar11 = pfVar8[2];
            uVar7 = (ulong)(uint)pfVar8[3];
          }
          else {
            if (((*(long *)(unaff_x20 + 0x1e0) == 0) ||
                (plVar6 = *(long **)(*(long *)(unaff_x20 + 0x1e0) + 0x38), plVar6 == (long *)0x0))
               || (plVar6 = (long *)(**(code **)(*plVar6 + 0x218))
                                              (plVar6,*(undefined8 *)(*plVar6 + 0x220)),
                  plVar6 == (long *)0x0)) goto LAB_0673fd58;
            iVar2 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
            if (((*(long *)(unaff_x20 + 0x1e0) == 0) ||
                (plVar6 = *(long **)(*(long *)(unaff_x20 + 0x1e0) + 0x38), plVar6 == (long *)0x0))
               || (plVar6 = (long *)(**(code **)(*plVar6 + 0x218))
                                              (plVar6,*(undefined8 *)(*plVar6 + 0x220)),
                  plVar6 == (long *)0x0)) goto LAB_0673fd58;
            iVar3 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
            if (((*(long *)(unaff_x20 + 0x1e0) == 0) ||
                (plVar6 = *(long **)(*(long *)(unaff_x20 + 0x1e0) + 0x38), plVar6 == (long *)0x0))
               || (plVar6 = (long *)(**(code **)(*plVar6 + 0x218))
                                              (plVar6,*(undefined8 *)(*plVar6 + 0x220)),
                  plVar6 == (long *)0x0)) goto LAB_0673fd58;
            iVar4 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
            if ((*(long *)(unaff_x20 + 0x1e0) == 0) ||
               (plVar6 = *(long **)(*(long *)(unaff_x20 + 0x1e0) + 0x40), plVar6 == (long *)0x0))
            goto LAB_0673fd58;
            uVar7 = (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
            fVar9 = 1.0 / (float)iVar2;
            fVar10 = 1.0 / (float)iVar3;
            fVar11 = (float)iVar4 + -1.0;
          }
          thunk_FUN_068d0fac(fVar9,fVar10,fVar11,uVar7);
          if (iVar5 != 1) {
            if ((*(long *)(unaff_x20 + 0x1f0) == 0) ||
               (plVar6 = *(long **)(*(long *)(unaff_x20 + 0x1f0) + 0x38), plVar6 == (long *)0x0))
            goto LAB_0673fd58;
            iVar5 = (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
            if ((iVar5 != 1) && (iVar5 != 2)) {
              return;
            }
          }
          FUN_068d0824();
          return;
        }
      }
    }
  }
LAB_0673fd58:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


