/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserIPD
ENTRY_POINT: 01f9680c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(undefined8 param_1)

{
  char in_NG;
  char in_OV;
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long lVar6;
  uint unaff_w24;
  long *unaff_x25;
  uint uVar7;
  
  do {
    iVar5 = (int)param_1;
    if (in_NG == in_OV) {
      uVar7 = 0;
      do {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar7) goto LAB_01f96964;
                    /* try { // try from 01f96820 to 0209683b has its CatchHandler @ 01f968c8 */
        plVar1 = *(long **)(unaff_x23 + (long)(int)uVar7 * 8 + 0x20);
        if (plVar1 == (long *)0x0) goto LAB_01f96960;
        plVar1 = (long *)(**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
        if (*(uint *)(unaff_x19 + 0x18) <= uVar7) goto LAB_01f96964;
        if (plVar1 == (long *)0x0) goto LAB_01f96960;
                    /* try { // try from 01f96854 to 02096867 has its CatchHandler @ 01f968c4 */
        uVar2 = (**(code **)(*plVar1 + 0x8b8))
                          (plVar1,*(undefined8 *)(unaff_x19 + (long)(int)uVar7 * 8 + 0x20),
                           *(undefined8 *)(*plVar1 + 0x8c0));
        if ((uVar2 & 1) == 0) {
          iVar5 = (int)*(undefined8 *)(unaff_x19 + 0x18);
          break;
        }
        uVar7 = uVar7 + 1;
        iVar5 = (int)*(undefined8 *)(unaff_x19 + 0x18);
      } while ((int)uVar7 < iVar5);
    }
    else {
      uVar7 = 0;
    }
    if (iVar5 <= (int)uVar7) {
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) {
LAB_01f96964:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      if (unaff_x21 == (long *)0x0) {
LAB_01f96960:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      lVar6 = *unaff_x25;
      if ((lVar6 != 0) &&
         (lVar3 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar4,0);
      }
      if (*(uint *)(unaff_x21 + 3) <= unaff_w22) goto LAB_01f96964;
      unaff_x21[(long)(int)unaff_w22 + 4] = lVar6;
      thunk_FUN_01286abc(unaff_x21 + (long)(int)unaff_w22 + 4,lVar6);
      unaff_w22 = unaff_w22 + 1;
    }
    do {
      unaff_w24 = unaff_w24 + 1;
      if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)unaff_w24) {
        if (unaff_w22 == 0) {
          lVar6 = 0;
        }
        else {
          if (unaff_w22 != 1) {
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            lVar6 = FUN_01f969bc();
            return lVar6;
          }
          if (unaff_x21 == (long *)0x0) goto LAB_01f96960;
          if ((int)unaff_x21[3] == 0) goto LAB_01f96964;
          lVar6 = unaff_x21[4];
        }
        return lVar6;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) goto LAB_01f96964;
      unaff_x25 = (long *)(unaff_x20 + (long)(int)unaff_w24 * 8 + 0x20);
      plVar1 = (long *)*unaff_x25;
      if ((plVar1 == (long *)0x0) ||
         (unaff_x23 = (**(code **)(*plVar1 + 0x378))(plVar1,*(undefined8 *)(*plVar1 + 0x380)),
         unaff_x23 == 0)) goto LAB_01f96960;
    } while (*(long *)(unaff_x23 + 0x18) == 0);
    if (unaff_x19 == 0) goto LAB_01f96960;
    param_1 = *(undefined8 *)(unaff_x19 + 0x18);
    in_OV = SBORROW4((int)param_1,1);
    in_NG = (int)param_1 + -1 < 0;
  } while( true );
}


