/*
FUNCTION_NAME: Google.Cloud.Storage.V1.UrlSigner.ContentDisposition$$Google.Cloud.Storage.V1.UrlSigner.IPostPolicyElement.get_ElementName
ENTRY_POINT: 04b7fda0
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Google_Cloud_Storage_V1_UrlSigner_ContentDisposition__Google_Cloud_Storage_V1_UrlSigner_IPostPolicyElement_get_ElementName
               (void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  ulong uVar4;
  long unaff_x25;
  int unaff_w26;
  long lVar5;
  long unaff_x29;
  
  puVar1 = (undefined8 *)FUN_02ce0a7c();
                    /* try { // try from 04b7fdb4 to 04c7fe0f has its CatchHandler @ 04b7fcac */
  (*(code *)*puVar1)();
  if (unaff_x25 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02cbedc4();
  }
  if (((unaff_w26 == 0xb) || (unaff_w26 == 0)) && (0 < (int)unaff_x22)) {
    if (unaff_x23 == 0) {
LAB_04b7fe90:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar4 = 0;
    lVar5 = 0x28;
    do {
      uVar2 = FUN_053c9c9c();
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(unaff_x21 + 0x18);
        if (lVar3 == 0) goto LAB_04b7fe90;
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        memcpy(unaff_x19 + 1,(void *)(lVar3 + lVar5),0x60);
        memcpy(unaff_x19 + 0x1b,unaff_x19 + 1,0x60);
        FUN_04b7bc7c();
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x68;
    } while (unaff_x22 != uVar4);
  }
  if (*(long *)(*unaff_x19 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


