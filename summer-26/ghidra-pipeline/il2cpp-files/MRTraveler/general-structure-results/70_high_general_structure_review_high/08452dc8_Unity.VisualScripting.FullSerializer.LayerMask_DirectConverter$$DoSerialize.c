/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$DoSerialize
ENTRY_POINT: 08452dc8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__DoSerialize(ulong param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *plVar7;
  
  param_1 = param_1 & 0xffffffff;
  do {
    if (param_1 <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar7 = *(long **)(unaff_x20 + 0x20 + unaff_x23 * 8);
    if (plVar7 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x24)) {
        uVar6 = *unaff_x25;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        plVar2 = (long *)FUN_0710fcf0(uVar6,0);
        if (plVar2 == (long *)0x0) {
LAB_08452f78:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar3 = (**(code **)(*plVar2 + 0x2c8))(plVar2,plVar7[2],*(undefined8 *)(*plVar2 + 0x2d0));
        if ((uVar3 & 1) != 0) {
          uVar6 = *unaff_x26;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          plVar2 = (long *)FUN_0710fcf0(uVar6,0);
          if (plVar2 == (long *)0x0) goto LAB_08452f78;
          uVar3 = (**(code **)(*plVar2 + 0x2c8))(plVar2,plVar7[2],*(undefined8 *)(*plVar2 + 0x2d0));
          if ((uVar3 & 1) != 0) {
            lVar5 = plVar7[2];
            goto LAB_08452e98;
          }
        }
      }
    }
    param_1 = (ulong)*(uint *)(unaff_x20 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x23) {
      lVar5 = 0;
LAB_08452e98:
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar3 = FUN_07119344(lVar5,0,0);
      if ((uVar3 & 1) == 0) {
        uVar6 = FUN_084539f8();
        FUN_0844bfc4();
      }
      else {
        plVar7 = (long *)thunk_FUN_03d12a58();
        uVar6 = *(undefined8 *)PTR_DAT_08f0f4a8;
        if (plVar7 == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        }
        uVar6 = FUN_06f683f8(uVar6,uVar4,0);
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
        }
        FUN_085a48e4(uVar6,0);
        uVar6 = 0;
      }
      return uVar6;
    }
  } while( true );
}


