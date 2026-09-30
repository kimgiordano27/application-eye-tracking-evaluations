/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 0559018c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  code *in_x9;
  long *unaff_x19;
  int unaff_w22;
  int unaff_w23;
  int unaff_w24;
  long unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000018;
  
  do {
    lVar8 = (*in_x9)();
    lVar7 = lVar8;
    do {
      if (in_stack_00000008 == (long *)0x0) {
LAB_05590238:
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      FUN_0549ac20(in_stack_00000008,lVar7,unaff_w22,unaff_w24,0);
      do {
        lVar7 = in_stack_00000018;
        if (in_stack_00000018 == 0) goto LAB_05590238;
        if (*(int *)(in_stack_00000018 + 0x10) <= unaff_w23) goto LAB_055901ec;
        do {
          unaff_w23 = FUN_055903fc(&stack0x00000008,&stack0x00000018,unaff_w23,
                                   in_stack_00000000._4_4_);
LAB_055901ec:
          unaff_w23 = unaff_w23 + 1;
          if (*(int *)(lVar7 + 0x10) <= unaff_w23) {
            if (in_stack_00000008 != (long *)0x0) {
              uVar9 = (**(code **)(*in_stack_00000008 + 0x168))
                                (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
              return uVar9;
            }
            goto LAB_05590238;
          }
          iVar3 = FUN_055520f4(lVar7,unaff_w23,(long)&stack0x00000000 + 4,0);
          if (*(int *)(*(long *)(unaff_x25 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02e9a04c(*(long *)(unaff_x25 + 0x88));
          }
          uVar6 = FUN_05580434(iVar3,0);
        } while ((uVar6 & 1) == 0);
        iVar4 = FUN_05590284();
        bVar1 = iVar3 == 1;
        unaff_w22 = iVar4 + 1;
        while (unaff_w23 = unaff_w22, unaff_w22 < *(int *)(lVar7 + 0x10)) {
          while( true ) {
            while (uVar5 = FUN_055520f4(lVar7,unaff_w23,(long)&stack0x00000000 + 4,0), uVar5 < 5) {
              unaff_w23 = in_stack_00000000._4_4_ + unaff_w23;
              bVar1 = (bool)(uVar5 == 1 | bVar1);
              if (*(int *)(lVar7 + 0x10) <= unaff_w23) goto LAB_05590168;
            }
            sVar2 = FUN_05487524(lVar7,unaff_w23,0);
            if (sVar2 == 0x27) break;
            if (((unaff_w26 << (ulong)(uVar5 & 0x1f) & unaff_w27) != 0) ||
               (unaff_w23 = in_stack_00000000._4_4_ + unaff_w23, *(int *)(lVar7 + 0x10) <= unaff_w23
               )) goto LAB_05590168;
          }
          if ((bVar1) && (lVar7 = lVar8, lVar8 == 0)) {
            lVar7 = (**(code **)(*unaff_x19 + 0x1b8))();
            lVar8 = lVar7;
          }
          if (in_stack_00000008 == (long *)0x0) goto LAB_05590238;
          FUN_0549ac20(in_stack_00000008,lVar7,unaff_w22,(unaff_w23 + 1) - unaff_w22,0);
          bVar1 = true;
          lVar7 = in_stack_00000018;
          unaff_w22 = unaff_w23 + 1;
          if (in_stack_00000018 == 0) goto LAB_05590238;
        }
LAB_05590168:
        unaff_w24 = unaff_w23 - unaff_w22;
      } while (unaff_w24 < 1);
    } while ((!bVar1) || (lVar7 = lVar8, lVar8 != 0));
    in_x9 = *(code **)(*unaff_x19 + 0x1b8);
  } while( true );
}


